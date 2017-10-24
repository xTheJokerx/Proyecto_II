#include "ContenedorLFechas.h"

ContenedorLFechas::ContenedorLFechas() { ppioFecha = NULL; }

ContenedorLFechas::~ContenedorLFechas(){
	NodoFecha *temp, *anterior;
	temp = ppioFecha;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteFecha();
		delete anterior;
	}
}

NodoFecha* ContenedorLFechas::getPpioFecha() { return ppioFecha; }
void ContenedorLFechas::setPpioFecha(NodoFecha* nodF) { ppioFecha = nodF; }



void ContenedorLFechas::IngresaDia(Fecha* nodF){
	if (ppioFecha == NULL)
		ppioFecha = new NodoFecha(nodF, ppioFecha);

	else {
		NodoFecha* pex = ppioFecha;
		NodoFecha* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteFecha();
		}
		NodoFecha* nuevo = new NodoFecha(nodF, NULL);
		aux->setSiguienteFecha(nuevo);
	}
}

string ContenedorLFechas::toString() {
	stringstream p;
	NodoFecha* pEx = ppioFecha;
	while (pEx != NULL) {
		p << pEx->getFecha()->toString() << endl;
		pEx = pEx->getSiguienteFecha();
	}
	return p.str();
}

void ContenedorLFechas::EliminaDia(Fecha* fecha){
	NodoFecha* pex = ppioFecha;
	while (pex != NULL) {
		if (pex->getFecha() == fecha) {
			NodoFecha* borrador = pex->getSiguienteFecha();
			pex->setSiguienteFecha(borrador->getSiguienteFecha());
			delete borrador;
		}
		else
			pex = pex->getSiguienteFecha();
	}
}