#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

class Persona {
protected:
	string nombre;
	string cedula;
	string telefono;

public:
	Persona();
	Persona(string, string,string);
	~Persona();
	virtual string getNombre();
	virtual string getCedula();
	virtual string getTelefono();
	virtual void setNombre(string);
	virtual void setCedula(string);
	virtual void setTelefono(string);
	virtual string toString() = 0;
	virtual void save(ofstream&) = 0;
	virtual void read(ifstream&) = 0;
};
