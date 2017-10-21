#pragma once
#include "Persona.h"

class Interfaz {
public:
	static int MenuPrincipal();
	
	static int MenuEstudiantes();
	static void IngresaEstudiante();
	static void MuestraEstudiante();
	static void EliminaEstudiante();
	
	static int MenuProfesores();
	static void IngresaProfesor();
	static void MuestraProfesor();
	static void EliminaProfesor();
	
	static int MenuCursos();
	static void IngresaCurso();
	static void MuestraCurso();
	static void EliminaCurso();
	
	static int MenuGrupos();
	static void IngresaGrupo();
	static void MuestraGrupo();
	static void EliminaGrupo();
	
	static int MenuMatricula();
	static void MatricularEstudianteEnGrupo();
	static void RetirarCursoMatriculado();
	static void CambiosCursoMatriculado();
	
	static int MenuListas();
	static void ListadoEstudiantesEnSistema();
	static void ListadoCursosMatriculadosPorEstudiante();
	static void ListadoEstudiantesMatriculadosPorGrupo();
	static void ListadoGruposAbiertosPorCurso();
	static void ListadoCursosAsignadosPorProfesor();
	
	static void VentanaDespedida();
	
	static void VentanaDefaultPrincipal();
	static void VentanaDefaultSecundaria1();
	static void VentanaDefaultSecundaria2();

};
