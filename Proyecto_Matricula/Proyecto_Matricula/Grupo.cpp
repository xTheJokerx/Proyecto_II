#include "Grupo.h"

Grupo::Grupo(){
	NRC = "";
	cupo = "";
	aula = "";
	profesor=NULL;
	horario = NULL;
}

Grupo::Grupo(string NRC, string cupo, string aula, Profesor* prof, Horario* horar){
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
	profesor = prof;
	horario = horar;
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