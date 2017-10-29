#pragma once
#include"Matricula.h"

class NodoMatricula{
private:
	Matricula* ptrMatricula;
	NodoMatricula* ptrNodoMatricula;
public:
	NodoMatricula();
	NodoMatricula(Matricula*, NodoMatricula*);
	~NodoMatricula();

	void setMatricula(Matricula*);
	void setSiguienteMatricula(NodoMatricula*);

	Matricula* getMatricula();
	NodoMatricula* getSiguienteMatricula();

};
