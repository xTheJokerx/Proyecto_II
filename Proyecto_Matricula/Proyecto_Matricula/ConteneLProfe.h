#pragma once
#include"NodoProfe.h"

class ContenedorLProfe {
private:
	NodoProfe* ppio;
public:
	ContenedorLProfe();
	~ContenedorLProfe();
	NodoProfe* getPpioProfe();
	void setPpioProfe(NodoProfe*);

	void IngresaProfesor(Profesor*);
	void MuestraProfesor();
	void EliminaProfesor(Profesor*);

};