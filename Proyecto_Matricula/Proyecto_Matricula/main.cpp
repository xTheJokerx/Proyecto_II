#include"Estudiante.h"
#include"Profesor.h"

int main() {
	//Creando estudiantes...
	Estudiante* est1 = new Estudiante();
	Estudiante* est2 = new Estudiante("Pedro", "111", "111");
	Estudiante* est3 = new Estudiante("Juan", "222", "222");
	
	//Creando profesores...
	Profesor* prof1 = new Profesor();
	Profesor* prof2 = new Profesor("Majid", "333", "333");
	Profesor* prof3 = new Profesor("Santiago", "444", "444");

	//Imprimiendo la informacion de los estudiantes...
	cout << "----- Informacion de los estudiantes -----" << endl;
	cout << est1->toString() << endl;
	cout << est2->toString() << endl;
	cout << est3->toString() << endl;

	//Imprimiendo la informacion de los profesores...
	cout << "----- Informacion de los profesores -----" << endl;
	cout << prof1->toString() << endl;
	cout << prof2->toString() << endl;
	cout << prof3->toString() << endl;

	//Borrando los objetos dinamicos
	delete est1;
	delete est2;
	delete est3;
	delete prof1;
	delete prof2;
	delete prof3;

	system("pause");
	return 0;
}