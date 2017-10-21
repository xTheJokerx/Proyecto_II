#include"NodoEstudiante.h"

NodoEstudiante::NodoEstudiante() {}
NodoEstudiante::NodoEstudiante(Estudiante*, NodoEstudiante*) {}
NodoEstudiante::~NodoEstudiante() {}

void NodoEstudiante::setProfesor(Estudiante*) {}
void NodoEstudiante::setSiguienteProfe(NodoEstudiante*) {}

Estudiante* NodoEstudiante::getEstudiante() {}
NodoEstudiante* NodoEstudiante::getSiguienteNodoEstudiante() {}