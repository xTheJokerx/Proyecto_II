#pragma once
#include"NodoProfe.h"

class ContenedorLProfe {
private:
	NodoProfe* ppioProfe;
public:
	ContenedorLProfe();
	~ContenedorLProfe();
	NodoProfe* getPpioProfe();
	void setPpioProfe(NodoProfe*);

	void IngresaProfesor(Profesor*);
	void MuestraProfesores();
	void EliminaProfesor(Profesor*);

};