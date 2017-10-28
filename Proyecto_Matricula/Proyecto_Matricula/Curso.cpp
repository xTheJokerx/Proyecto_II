#include "Curso.h"

Curso::Curso() {
	nombreCurso = "Nombre_del_curso";
	codigo = "codigo_de_curso";
}

Curso::Curso(string nombreCurso, string codigo) {
	this->nombreCurso = nombreCurso;
	this->codigo = codigo;
}

Curso::~Curso() {
	//No recuerdo cómo eliminar un contenedor tipo lista... :v
	//te voy a matar. atte: Limpiaman
}



string Curso::getNombreCurso() { return nombreCurso; }

string Curso::getCodigo() { return codigo; }



ContenedorLGrupo* Curso::getContenedorGrupos() { return contLGrupos; }

void Curso::setNombreCurso(string nombreCurso) { this->nombreCurso = nombreCurso; }

void Curso::setCodigo(string codigo) { this->codigo = codigo; }


void Curso::save(ofstream& archivo) {
	archivo << getNombreCurso() << endl << getCodigo() << endl << getContenedorGrupos()->toString() << endl;
}

void Curso::read(ifstream& archivo) {
	archivo >> getNombreCurso() >> getCodigo() >> getContenedorGrupos()->toString();
}