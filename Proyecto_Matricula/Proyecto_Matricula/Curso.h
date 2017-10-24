#pragma once
#include<iostream>
#include<sstream>
#include"ContenedorLGrupo.h"
using namespace std;

class Curso {
private:
	string nombreCurso;
	string codigo;
	ContenedorLGrupo* contLGrupos;

public:
	Curso();
	Curso(string, string);
	~Curso();
	string getNombreCurso();
	string getCodigo();
	ContenedorLGrupo* getContenedorGrupos();
	void setNombreCurso(string);
	void setCodigo(string);

	void save(ofstream&);
	void read(ifstream&);

	string toString();
};