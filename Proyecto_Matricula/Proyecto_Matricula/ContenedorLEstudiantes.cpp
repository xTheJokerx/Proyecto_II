#include"ContenedorLEstudiante.h"

ContenedorLEstudiante::ContenedorLEstudiante() {
	ppioEstu = NULL;
}

ContenedorLEstudiante::~ContenedorLEstudiante() {
	NodoEstudiante *temp, *anterior;
	temp = ppioEstu;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteEstudiante();
		delete anterior;
	}
}

NodoEstudiante* ContenedorLEstudiante::getPpioEstudiante() { return ppioEstu; }

void ContenedorLEstudiante::setPpioEstudiante(NodoEstudiante* es) { ppioEstu = es; }


void ContenedorLEstudiante::IngresaEstudiante(Estudiante* estu) {
	if (ppioEstu == NULL)
		ppioEstu = new NodoEstudiante(estu, ppioEstu);

	else {
		NodoEstudiante* pex=ppioEstu;
		NodoEstudiante* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteEstudiante();
		}
		NodoEstudiante* nuevo = new NodoEstudiante(estu, NULL);
		aux->setSiguienteEstudiante(nuevo);
	}
}

string ContenedorLEstudiante::toString() {
	stringstream p;
	NodoEstudiante* pEx = ppioEstu;
	p << "------ LISTA DE ESTUDIANTES -------" << endl;
	while (pEx != NULL) {
		p << pEx->getEstudiante()->toString() << endl;
		pEx = pEx->getSiguienteEstudiante();
	}
	return p.str();
}

void ContenedorLEstudiante::EliminaEstudiante(Estudiante* estu) {
	NodoEstudiante* pex = ppioEstu;
	while (pex != NULL) {
		if (pex->getEstudiante() == estu) {
			NodoEstudiante* borrador = pex->getSiguienteEstudiante();
			pex->setSiguienteEstudiante(borrador->getSiguienteEstudiante());
			delete borrador;
		}
		else
			pex = pex->getSiguienteEstudiante();
	}
}

void ContenedorLEstudiante::saveAll(ofstream& file) {
	NodoEstudiante* pex = ppioEstu;
	while (pex != NULL) {
		pex->getEstudiante()->save(file);
		pex = pex->getSiguienteEstudiante();
	}
}

void ContenedorLEstudiante::readAll(ifstream& file) {
	//Se crea un objeto fantasma y puntero...
	Estudiante est;
	Estudiante* ptrEst;

	//Se limpia la lista...
	NodoEstudiante *temp, *anterior;
	temp = ppioEstu;
	while (temp != NULL){
		anterior = temp;
		temp = temp->getSiguienteEstudiante();
		delete anterior;
	}

	est.read(file);			// Lectura previa... importante
	while (!file.eof()) {
		ptrEst = new Estudiante(est.getNombre(), est.getCedula(), est.getTelefono());
		IngresaEstudiante(ptrEst);
		est.read(file);
	}

}