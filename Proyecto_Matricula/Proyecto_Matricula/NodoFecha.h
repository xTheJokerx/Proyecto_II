#pragma once
#include "Fecha.h"

class NodoFecha {
private:
	Fecha* ptrFecha;
	NodoFecha* ptrNodoFecha;
public:
	NodoFecha();
	NodoFecha(Fecha*, NodoFecha*);
	~NodoFecha();

	void setFecha(Fecha*);
	void setSiguienteFecha(NodoFecha*);

	Fecha* getFecha();
	NodoFecha* getSiguienteFecha();

};
