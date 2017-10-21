#include"ContenedorLProfe.h"

ContenedorLProfe::ContenedorLProfe() {
	ppioProfe = NULL;
}

ContenedorLProfe::~ContenedorLProfe() {} //ver como se define

NodoProfe* ContenedorLProfe::getPpioProfe() { return ppioProfe; }

void ContenedorLProfe::setPpioProfe(NodoProfe* nod) { ppioProfe = nod; }


void ContenedorLProfe::IngresaProfesor(Profesor* pro) {
}

void ContenedorLProfe::MuestraProfesor() {}

void ContenedorLProfe::EliminaProfesor(Profesor* pro) {}

