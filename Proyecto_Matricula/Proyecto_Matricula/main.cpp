#include "Controladora.h"
#include "ContenedorLEstudiante.h"
#include "ContenedorLProfe.h"
#include "ContenedorLGrupo.h"

int main() {
	/*Controladora* control = new Controladora;
	control->Control1();
	delete control;*/
	
	Estudiante* est = new Estudiante();
	Profesor* prof = new Profesor("A", "A", "A");
	Grupo* gru = new Grupo("C", "C", "C");
	ContenedorLProfe* cont = new ContenedorLProfe;
	ContenedorLGrupo* cont2 = new ContenedorLGrupo;
	cont2->IngresaGrupo(gru);
	cout << cont2->toString() << endl;
	
	system("pause");
	return 0;
}