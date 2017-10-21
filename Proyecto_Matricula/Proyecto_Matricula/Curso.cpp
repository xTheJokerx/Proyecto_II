#include "Curso.h"

Curso::Curso() {
	nombreCurso = "NombreCurso_de_prueba";
	codigo = "Codigo_de_prueba";
}

Curso::Curso(string nombreCurso, string codigo) {
	this->nombreCurso = nombreCurso;
	this->codigo = codigo;
}

Curso::~Curso() {
	//No recuerdo cómo eliminar un contenedor tipo lista... :v
}

string Curso::getNombreCurso() { return nombreCurso; }

string Curso::getCodigo() { return codigo; }

ContenedorLGrupos* Curso::getContenedorGrupos() { return contLGrupos; }

void Curso::setNombreCurso(string nombreCurso) { this->nombreCurso = nombreCurso; }

void Curso::setCodigo(string codigo) { this->codigo = codigo; }