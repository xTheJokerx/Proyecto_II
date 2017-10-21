#include"NodoProfe.h"

NodoProfe::NodoProfe() {
	ptrpro = NULL;
	ptrNodoProfe = NULL;
}

NodoProfe::NodoProfe(Profesor* profe, NodoProfe* nod) {
	ptrpro = profe;
	ptrNodoProfe = nod;
}

NodoProfe::~NodoProfe() {} //depende si es necesario el objeto


void NodoProfe::setProfesor(Profesor* profe) { ptrpro = profe; }

void NodoProfe::setSiguienteProfe(NodoProfe* nod) { ptrNodoProfe = nod; }


Persona* NodoProfe::getProfesor() { return ptrpro; }

NodoProfe* NodoProfe::getSiguienteProfe() { return ptrNodoProfe; }
