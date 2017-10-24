#include "NodoFecha.h"

NodoFecha::NodoFecha() { ptrFecha = NULL; ptrNodoFecha = NULL; }

NodoFecha::NodoFecha(Fecha* ptrFecha, NodoFecha* ptrNodoFecha) { 
	this->ptrFecha = ptrFecha; 
	this->ptrNodoFecha = ptrNodoFecha; 
}

NodoFecha::~NodoFecha() {}

void NodoFecha::setFecha(Fecha* fe) { ptrFecha = fe; }
void NodoFecha::setSiguienteFecha(NodoFecha* nodF) { ptrNodoFecha = nodF; }

Fecha* NodoFecha::getFecha() { return ptrFecha; }
NodoFecha* NodoFecha::getSiguienteFecha() { return ptrNodoFecha; }