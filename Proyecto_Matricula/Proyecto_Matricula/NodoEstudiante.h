#pragma once
#include"Estudiante.h"

class NodoEstudiante {
private:
	NodoEstudiante* ptrEstu;
	NodoEstudiante* ptrNodoEstu;
public:
	NodoEstudiante();
	NodoEstudiante(Estudiante*, NodoEstudiante*);
	~NodoEstudiante();

	void setProfesor(Estudiante*);
	void setSiguienteProfe(NodoEstudiante*);

	Estudiante* getEstudiante();
	NodoEstudiante* getSiguienteNodoEstudiante();

};
