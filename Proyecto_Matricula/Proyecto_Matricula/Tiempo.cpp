#include"Tiempo.h"

Tiempo::Tiempo() {
	hora = 0;
	minuto = 0;
}

Tiempo::Tiempo(int ho, int mi) {
	hora = ho;
	minuto = mi;
}

Tiempo::~Tiempo() {}



void Tiempo::setHora(int ho) { hora = ho; }

void Tiempo::setMinuto(int mi) { minuto = mi; }


int Tiempo::getHora() { return hora; }

int Tiempo::getMinuto() { return minuto; }


string Tiempo::toString() {
	stringstream s;
	s << "Hora: " << getHora() << endl;
	s << "Minuto " << getMinuto() << endl;
	return s.str();
}