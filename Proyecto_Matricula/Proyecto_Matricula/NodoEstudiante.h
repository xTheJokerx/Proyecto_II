#pragma once
#include"Estudiante.h"

class NodoEstudiante {
private:
	Estudiante* ptrEstu;
	NodoEstudiante* ptrNodoEstu;
public:
	NodoEstudiante();
	NodoEstudiante(Estudiante*, NodoEstudiante*);
	~NodoEstudiante();

	void setEstudiante(Estudiante*);
	void setSiguienteEstudiante(NodoEstudiante*);

	Estudiante* getEstudiante();
	NodoEstudiante* getSiguienteEstudiante();

};
