#include"ContenedorLGrupo.h"

ContenedorLGrupo::ContenedorLGrupo() {
	ppioGrupo = NULL;
}

ContenedorLGrupo::~ContenedorLGrupo() {} //ver como se define

NodoGrupo* ContenedorLGrupo::getPpioGrupo() { return ppioGrupo; }

void ContenedorLGrupo::setPpioGrupo(NodoGrupo* nod) { ppioGrupo = nod; }


void ContenedorLGrupo::IngresaGrupo(Grupo* gru) {

	if (ppioGrupo == NULL)
		ppioGrupo = new NodoGrupo(gru, NULL);

	else {
		NodoGrupo* pex;
		pex = ppioGrupo;
		while (pex->getSiguienteGrupo() != NULL)
			pex = pex->getSiguienteGrupo();
		NodoGrupo* nuevo = new NodoGrupo(gru, NULL);
		pex->setSiguienteGrupo(nuevo);
	}

}


string ContenedorLGrupo::toString() {
	stringstream p;
	NodoGrupo* pEx = ppioGrupo;
	p << "------ LISTA DE GRUPOS -------" << endl;
	while (pEx != NULL) {
		p << pEx->getGrupo()->toString() << endl;
		pEx = pEx->getSiguienteGrupo();
	}
	return p.str();
}

void ContenedorLGrupo::EliminaGrupo(Grupo* pro) {
	NodoGrupo* pex = ppioGrupo;
	while (pex != NULL) {
		if (pex->getGrupo() == pro) {
			NodoGrupo* borrador = pex->getSiguienteGrupo();
			pex->setSiguienteGrupo(borrador->getSiguienteGrupo());
			delete borrador;
		}
		else
			pex = pex->getSiguienteGrupo();
	}

}

