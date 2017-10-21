#pragma once
#include"Profesor.h"

class NodoProfe {
private:
	Profesor* ptrpro;
	NodoProfe* ptrNodoProfe;
public:
	NodoProfe();
	NodoProfe(Profesor*, NodoProfe*);
	~NodoProfe();

	void setProfesor(Profesor*);
	void setSiguienteProfe(NodoProfe*);

	Persona* getProfesor();
	NodoProfe* getSiguienteProfe();

};