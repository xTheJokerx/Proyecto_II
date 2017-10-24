#pragma once
#include "NodoFecha.h"

class ContenedorLFechas {
private:
	NodoFecha* ppioFecha;

public:
	ContenedorLFechas();
	~ContenedorLFechas();

	NodoFecha* getPpioFecha();
	void setPpioFecha(NodoFecha*);

	void IngresaDia(Fecha*);
	string toString();
	void EliminaDia(Fecha*);

};
