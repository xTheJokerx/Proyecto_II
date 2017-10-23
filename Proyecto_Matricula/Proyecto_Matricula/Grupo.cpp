#include "Grupo.h"

Grupo::Grupo(){
	NRC = "";
	cupo = "";
	aula = "";
	profesor=NULL;
	horario = new Horario;
}

Grupo::Grupo(string NRC, string cupo, string aula) {
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
}

Grupo::Grupo(string NRC, string cupo, string aula, Profesor& prof, Horario& horar){
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
	profesor = (Profesor*) &prof;
	horario = (Horario*) &horar;
}

Grupo::~Grupo(){
	delete profesor;
	delete horario;
}

string Grupo::getNRC() { return NRC; }

string Grupo::getCupo() { return cupo; }

string Grupo::getAula() { return aula; }

Profesor* Grupo::getProfesor() { return profesor; }

Horario* Grupo::getHorario() { return horario; }

void Grupo::setNRC(string NRC) { this->NRC = NRC; }

void Grupo::setCupo(string cupo) { this->cupo = cupo; }

void Grupo::setAula(string aula) { this->aula = aula; }

void Grupo::setProfesor(Profesor& prof) { profesor = (Profesor*)&prof; }

void Grupo::setHorario(Horario& horar) { horario = (Horario*)&horar; }

string Grupo::toString() {
	stringstream s;
	s << "---DATOS DEL CURSO---" << endl;
	s << "NRC: " << getNRC() << endl;
	s << "Cupo: " << getCupo() << endl;
	s << "Aula: " << getAula() << endl;
	if (profesor != NULL)
		s << "Profesor: " << getProfesor() << endl;
	else
		s << "Profesor por anunciar" << endl;
	if (horario != NULL)
		s << "Horario: " << getHorario() << endl;
	else
		s << "Horario aun no definido" << endl;
	return s.str();
}