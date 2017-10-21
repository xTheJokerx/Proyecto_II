#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Curso {
private:
	string nombreCurso;
	string codigo;
	ContenedorLGrupos* contLGrupos;

public:
	Curso();
	Curso(string, string);
	~Curso();
	string getNombreCurso();
	string
};