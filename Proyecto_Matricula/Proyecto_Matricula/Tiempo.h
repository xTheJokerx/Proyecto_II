#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Tiempo {
private:
	int hora;
	int minuto;
public:
	Tiempo();
	Tiempo(int, int);
	~Tiempo();

	void setHora(int);
	void setMinuto(int);

	int getHora();
	int getMinuto();

	string toString();
};