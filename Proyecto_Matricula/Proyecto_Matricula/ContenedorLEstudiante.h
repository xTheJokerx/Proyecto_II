#pragma once
#include"NodoEstudiante.h"

class ContenedorLEstudiante {
private:
	NodoEstudiante* ppioEstu;
public:
	ContenedorLEstudiante();
	~ContenedorLEstudiante();
	NodoEstudiante* getPpioEstudiante();
	void setPpioEstudiante(NodoEstudiante*);

	void IngresaEstudiante(Estudiante*);
	void MuestraEstudiante();
	void EliminaEstudiante(Estudiante*);

};