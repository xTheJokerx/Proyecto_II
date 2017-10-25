#include "Controladora.h"
#include "ContenedorLEstudiante.h"
#include "ContenedorLProfe.h"
#include "ContenedorLGrupo.h"

int main() {
	/*Controladora* control = new Controladora;
	control->Control1();
	delete control;*/
	string no, ce, te;

	ContenedorLEstudiante* contEstu = new ContenedorLEstudiante;
	Estudiante* estu = new Estudiante;
	
	int opcion;
	do {
		cout << "-------- BIENVENIDO AL MENU DE ESTUDIANTES --------" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "1) Ingresar un estudiante. " << endl;
		cout << "2) Mostrar un estudiante.  " << endl;
		cout << "3) Eliminar un estudiante.  " << endl;
		cout << "Salir del menu" << endl;
		cout << "Digite el numero de la opcion que necesita: ";
		cin >> opcion;
		cout << endl;

		switch (opcion) {
		case 1: 
			cout << "Nombre: " << endl;
			cin >> no;
			cout << "Cedula :" << endl;
			cin >> ce;
			cout << "Telefono: " << endl;
			cin>>te;
			contEstu->IngresaNUEVOEstudiante();
			break;

		case 2: 
			cout << "Ingrese el numero de cedula del estudiante: " << endl;
			cin >> ce;
			
			break;
		case 3: break;
		case 4: break;

		}

	} while (opcion != 4);


	
	system("pause");
	return 0;
}