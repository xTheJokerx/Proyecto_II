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

void ContenedorLEstudiante::IngresaNUEVOEstudiante(string no, string ce, string te) {
	if (ppioEstu == NULL) {
		Estudiante* estu = new Estudiante(no, ce, te);
		ppioEstu = new NodoEstudiante(estu, ppioEstu);
	}

	else {
		NodoEstudiante* pex = ppioEstu;
		NodoEstudiante* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteEstudiante();
		}
		Estudiante* estu = new Estudiante(no, ce, te);
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

void ContenedorLEstudiante::EliminaEstudiantePorCedula(string cedu) {
	NodoEstudiante* pex = ppioEstu;
	while (pex != NULL) {
		if (pex->getEstudiante()->getCedula() == cedu) {
			NodoEstudiante* borrador = pex->getSiguienteEstudiante();
			pex->setSiguienteEstudiante(borrador->getSiguienteEstudiante());
			borrador->~NodoEstudiante();
		}
		else
			pex = pex->getSiguienteEstudiante();
	}
}

string ContenedorLEstudiante::muestraUnEstudiantePorCedula(string ce){
	stringstream s;
	NodoEstudiante* pex = ppioEstu;
	while (pex != NULL) {
		if (pex->getEstudiante()->getCedula() != ce) {
			pex = pex->getSiguienteEstudiante();
		}
		else {
			s << pex->getEstudiante()->toString();
			return s.str();
		}
	}
	s << "El estudiante no esta registrado" << endl;
	return s.str();
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

