#pragma once
#include "Persona.h"

class Estudiante : public Persona {
public:
	Estudiante();
	Estudiante(string, string, string);
	~Estudiante();
	string toString();
};
