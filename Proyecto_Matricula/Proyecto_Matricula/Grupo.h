#pragma once
#include "Profesor.h"
#include"Horario.h"
#include"Curso.h"
using namespace std;

class Grupo {
private:
	string NRC;
	string cupo;
	string aula;
	Profesor* profesor;
	Horario* horario;
	Curso* curso;

public:
	Grupo();
	Grupo(string, string, string);
	Grupo(string, string, string, Profesor*, Horario*);
	~Grupo();

	string getNRC();
	string getCupo();
	string getAula();
	Profesor* getProfesor();
	Horario* getHorario();
	Curso* getCurso();

	void setNRC(string);
	void setCupo(string);
	void setAula(string);
	void setProfesor(Profesor&);
	void setHorario(Horario&);
	void setCurso(Curso&);

	void save(ofstream&);
	void read(ifstream&);
	
	string toString();
};
