#include "Estudiante.h"
#include "Profesor.h"
#include "Interfaz.h"

int main() {
	int opcion;
	Estudiante* est1 = new Estudiante();
	Profesor* prof1 = new Profesor();
	Interfaz::MenuPrincipal();
	
	
	/*do {
		system("cls");
		cout << "---------- BIENVENIDO AL MENU PRINCIPAL ----------" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "1) Menu de estudiantes.  " << endl;
		cout << "2) Menu de profesores.   " << endl;
		cout << "3) Menu de de cursos.    " << endl;
		cout << "4) Menu de grupos.       " << endl;
		cout << "5) Menu de matricula.    " << endl;
		cout << "6) Menu de de listas.    " << endl;
		cout << "7) Salir del programa.   " << endl;
		cout << "Digite el numero de la opcion que necesita: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE ESTUDIANTES --------" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "1) Ingresar un estudiante. " << endl;
			cout << "2) Mostrar un estudiante.  " << endl;
			cout << "3) Eliminar un estudiante.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar estudiante." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar estudiante." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar estudiante." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE PROFESORES --------" << endl;
			cout << "--------------------------------------------------" << endl;
			cout << "1) Ingresar un profesor. " << endl;
			cout << "2) Mostrar un profesor.  " << endl;
			cout << "3) Eliminar un profesor.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar profesor." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar profesor." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar profesor." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE CURSOS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Ingresar un curso. " << endl;
			cout << "2) Mostrar un curso.  " << endl;
			cout << "3) Eliminar un curso.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar curso." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar curso." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar curso." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE GRUPOS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Ingresar un grupo. " << endl;
			cout << "2) Mostrar un grupo.  " << endl;
			cout << "3) Eliminar un grupo.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar grupo." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar grupo." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar grupo." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 5:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE MATRICULA --------" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "1) Matricular un estudiante en un grupo.         " << endl;
			cout << "2) Retirar un curso matriculado.                 " << endl;
			cout << "3) Realizar cambios en un curso matriculado.     " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de matricular un estudiante en un grupo." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de retirar un curso matriculado." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de realizar cambios en un curso matriculado." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 6:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE LISTAS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Mostrar el listado de estudiantes dentro del sistema.       " << endl;
			cout << "2) Mostrar el listado de cursos matriculados por estudiante.   " << endl;
			cout << "3) Mostrar el listado de estudiantes matriculados en un grupo. " << endl;
			cout << "4) Mostrar el listado de grupos abiertos por curso.            " << endl;
			cout << "5) Mostrar el listado de cursos asignados a un profesor.       " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ostrar el listado de estudiantes dentro del sistema." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar el listado de cursos matriculados por estudiante." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de mostrar el listado de estudiantes matriculados en un grupo." << endl;
				system("pause");
				break;
			case 4:
				cout << "Ha ingresado la opcion de mostrar el listado de grupos abiertos por curso." << endl;
				system("pause");
				break;
			case 5:
				cout << "Ha ingresado la opcion de mostrar el listado de cursos asignados a un profesor." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 5." << endl;
				system("pause");
				break;
			}
			break;
		case 7:
			cout << "---------- MUCHAS GRACIAS ----------" << endl;
			break;
		default:
			cout << "Por favor, digite un numero del 1 al 7." << endl;
			break;
		}

	} while (opcion != 7);*/

	delete est1;
	delete prof1;

	return 0;
}