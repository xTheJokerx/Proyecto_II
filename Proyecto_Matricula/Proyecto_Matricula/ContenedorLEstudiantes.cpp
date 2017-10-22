#include"ContenedorLEstudiante.h"

ContenedorLEstudiante::ContenedorLEstudiante() {
	ppioEstu = NULL;
}

ContenedorLEstudiante::~ContenedorLEstudiante() {}//ver como hacerlo

NodoEstudiante* ContenedorLEstudiante::getPpioEstudiante() { return ppioEstu; }

void ContenedorLEstudiante::setPpioEstudiante(NodoEstudiante* es) { ppioEstu = es; }



void ContenedorLEstudiante::IngresaEstudiante(Estudiante* estu) {
	if (ppioEstu == NULL)
		ppioEstu = new NodoEstudiante(estu, NULL);

	else {
		NodoEstudiante* pex;
		pex = ppioEstu;
		while (pex->getSiguienteEstudiante() != NULL)
			pex = pex->getSiguienteEstudiante();
		NodoEstudiante* nuevo = new NodoEstudiante(estu, NULL);
		pex->setSiguienteEstudiante(nuevo);
	}
}

void ContenedorLEstudiante::MuestraEstudiantes() {
	NodoEstudiante* pex = ppioEstu;
	while (pex != NULL)
		cout << pex->getEstudiante()->toString()<<endl;
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
