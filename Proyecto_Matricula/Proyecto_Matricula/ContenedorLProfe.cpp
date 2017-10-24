#include"ContenedorLProfe.h"

ContenedorLProfe::ContenedorLProfe() {
	ppioProfe = NULL;
}

ContenedorLProfe::~ContenedorLProfe() {
	NodoProfe *temp, *anterior;
	temp = ppioProfe;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteProfe();
		delete anterior;
	}
}

NodoProfe* ContenedorLProfe::getPpioProfe() { return ppioProfe; }

void ContenedorLProfe::setPpioProfe(NodoProfe* nod) { ppioProfe = nod; }


void ContenedorLProfe::IngresaProfesor(Profesor* pro) {
	if (ppioProfe == NULL)
		ppioProfe = new NodoProfe(pro, ppioProfe);

	else {
		NodoProfe* pex;
		pex = ppioProfe;
		while (pex->getSiguienteProfe() != NULL)
			pex = pex->getSiguienteProfe();
		NodoProfe* nuevo = new NodoProfe(pro, NULL);
		pex->setSiguienteProfe(nuevo);
	}

}

string ContenedorLProfe::toString() {
	stringstream p;
	NodoProfe* pEx = ppioProfe;
	p << "------ LISTA DE PROFESORES -------" << endl;
	while (pEx != NULL) {
		p << pEx->getProfesor()->toString() << endl;
		pEx = pEx->getSiguienteProfe();
	}
	return p.str();
}

void ContenedorLProfe::EliminaProfesor(Profesor* pro) {
	NodoProfe* pex = ppioProfe;
	while (pex != NULL) {
		if (pex->getProfesor() == pro) {
			NodoProfe* borrador = pex->getSiguienteProfe();
			pex->setSiguienteProfe(borrador->getSiguienteProfe());
			delete borrador;
		}
		else
			pex = pex->getSiguienteProfe();
	}
}

void ContenedorLProfe::saveAll(ofstream& file) {
	NodoProfe* pex = ppioProfe;
	while (pex != NULL) {
		pex->getProfesor()->save(file);
		pex = pex->getSiguienteProfe();
	}
}

void ContenedorLProfe::readAll(ifstream& file) {
	//Objeto fantasma y puntero...
	Profesor prof;
	Profesor* ptrProf;

	//Limpiando la lista...
	NodoProfe *temp, *anterior;
	temp = ppioProfe;
	while (temp != NULL){
		anterior = temp;
		temp = temp->getSiguienteProfe();
		delete anterior;
	}

	prof.read(file);			// Lectura previa... importante
	while (!file.eof()) {
		ptrProf = new Profesor(prof.getNombre(), prof.getCedula(), prof.getTelefono());
		IngresaProfesor(ptrProf);
		prof.read(file);		
	}

}

