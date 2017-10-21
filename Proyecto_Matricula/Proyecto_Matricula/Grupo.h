#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Profesor.h"
using namespace std;

class Grupo {
private:
	string NRC;
	string cupo;
	string aula;
	Profesor* profesor;
	Horario* horario;

public:
	Grupo();
	Grupo(string, string, string, Profesor&, Horario&);
	~Grupo();
	string getNRC();
	string getCupo();
	string getAula();
	Profesor* getProfesor();
	Horario* getHorario();
	void setNRC(string);
	void setCupo(string);
	void setAula(string);
	void setProfesor(Profesor&);
	void setHorario(Horario&);

};