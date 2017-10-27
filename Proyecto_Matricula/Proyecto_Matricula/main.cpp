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
		cout << "3) Eliminar un estudiante.  " << endl; //error en eliminar un estudiante
		cout << "4) Salir del menu" << endl;
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
			contEstu->IngresaNUEVOEstudiante(no,ce,te);
			break;

		case 2: 
			cout << "Ingrese el numero de cedula del estudiante: " << endl;
			cin >> ce;
			cout<<contEstu->muestraUnEstudiantePorCedula(ce);
			cout << "Accion completada con exito" << endl;
			break;

		case 3:
			cout << "Ingrese el numero de cedula del estudiante" << endl;
			cin >> ce;
			contEstu->EliminaEstudiantePorCedula(ce);
			cout << "Accion completada con exito" << endl;
			break;

		case 4: cout << "Gracias" << endl;
			break;

		}

	} while (opcion != 4);


	cout << "probare mostrar todos los estudiantes " << endl;
	cout << contEstu->toString() << endl;

	contEstu->~ContenedorLEstudiante();

	system("pause");
	return 0;
}