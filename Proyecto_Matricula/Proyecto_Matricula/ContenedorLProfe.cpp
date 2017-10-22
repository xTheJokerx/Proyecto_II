#include"ContenedorLProfe.h"

ContenedorLProfe::ContenedorLProfe() {
	ppioProfe = NULL;
}

ContenedorLProfe::~ContenedorLProfe() {} //ver como se define

NodoProfe* ContenedorLProfe::getPpioProfe() { return ppioProfe; }

void ContenedorLProfe::setPpioProfe(NodoProfe* nod) { ppioProfe = nod; }


void ContenedorLProfe::IngresaProfesor(Profesor* pro) {
	if (ppioProfe == NULL)
		ppioProfe = new NodoProfe(pro, NULL);

	else {
		NodoProfe* pex;
		pex = ppioProfe;
		while (pex->getSiguienteProfe() != NULL)
			pex = pex->getSiguienteProfe();
		NodoProfe* nuevo = new NodoProfe(pro, NULL);
		pex->setSiguienteProfe(nuevo);
	}

}

void ContenedorLProfe::MuestraProfesores() { //ver si se puede quitar ese cout
	NodoProfe* pex = ppioProfe;
	while (pex != NULL)
		cout << pex->getProfesor()->toString() << endl;
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

