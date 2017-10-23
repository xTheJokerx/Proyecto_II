#include"ContenedorLEstudiante.h"

ContenedorLEstudiante::ContenedorLEstudiante() {
	ppioEstu = NULL;
}

ContenedorLEstudiante::~ContenedorLEstudiante() {}//ver como hacerlo

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
