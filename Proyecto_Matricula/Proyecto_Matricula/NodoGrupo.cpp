#include"NodoGrupo.h"

NodoGrupo::NodoGrupo() {
	ptrGrupo = NULL;
	ptrNodoGrupo = NULL;
}

NodoGrupo::NodoGrupo(Grupo* gru, NodoGrupo* nod) {
	ptrGrupo = gru;
	ptrNodoGrupo = nod;
}

NodoGrupo::~NodoGrupo() {

} //depende si es necesario el objeto


void NodoGrupo::setGrupo(Grupo* gru) { ptrGrupo = gru; }

void NodoGrupo::setSiguienteGrupo(NodoGrupo* nod) { ptrNodoGrupo = nod; }


Grupo* NodoGrupo::getGrupo() { return ptrGrupo; }

NodoGrupo* NodoGrupo::getSiguienteGrupo() { return ptrNodoGrupo; }
