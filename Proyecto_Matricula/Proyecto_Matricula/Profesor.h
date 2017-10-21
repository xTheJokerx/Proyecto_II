#pragma once
#include "Persona.h"

class Profesor : public Persona {
public:
	Profesor();
	Profesor(string, string, string);
	~Profesor();
	string toString();
};
