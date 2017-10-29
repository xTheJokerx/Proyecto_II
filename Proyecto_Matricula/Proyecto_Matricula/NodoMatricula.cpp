#include"NodoMatricula.h"


NodoMatricula::NodoMatricula() {
	ptrMatricula = NULL;
	ptrNodoMatricula = NULL;
}

NodoMatricula::NodoMatricula(Matricula* ma, NodoMatricula* nod) {
	ptrMatricula = ma;
	ptrNodoMatricula = nod;
}

NodoMatricula::~NodoMatricula() {

} //depende si es necesario el objeto


void NodoMatricula::setMatricula(Matricula* ma) { ptrMatricula = ma; }

void NodoMatricula::setSiguienteMatricula(NodoMatricula* nod) { ptrNodoMatricula = nod; }


Matricula* NodoMatricula::getMatricula() { return ptrMatricula; }

NodoMatricula* NodoMatricula::getSiguienteMatricula() { return ptrNodoMatricula; }
