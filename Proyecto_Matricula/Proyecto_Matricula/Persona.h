#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Persona {
protected:
	string nombre;
	string cedula;
	string telefono;

public:
	virtual string getNombre();
	virtual string getCedula();
	virtual string getTelefono();
	virtual void setNombre(string);
	virtual void setCedula(string);
	virtual void setTelefono(string);
	virtual string toString() = 0;
};
