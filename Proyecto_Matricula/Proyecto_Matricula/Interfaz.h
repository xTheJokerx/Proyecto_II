#pragma once

class Interfaz {
public:
	static void Inicializadora();
	
	static void MenuPrincipal();
	
	static void MenuEstudiantes();
	static void IngresaEstudiante();
	static void MuestraEstudiante();
	static void EliminaEstudiante();
	
	static void MenuProfesores();
	static void IngresaProfesor();
	static void MuestraProfesor();
	static void EliminaProfesor();
	
	static void MenuCursos();
	static void IngresaCurso();
	static void MuestraCurso();
	static void EliminaCurso();
	
	static void MenuGrupos();
	static void IngresaGrupo();
	static void MuestraGrupo();
	static void EliminaGrupo();
	
	static void MenuMatricula();
	static void MatricularEstudianteEnGrupo();
	static void RetirarCursoMatriculado();
	static void CambiosCursoMatriculado();
	
	static void MenuListas();
	static void ListadoEstudiantesEnSistema();
	static void ListadoCursosMatriculadosPorEstudiante();
	static void ListadoEstudiantesMatriculadosPorGrupo();
	static void ListadoGruposAbiertosPorCurso();
	static void ListadoCursosAsignadosPorProfesor();
	
	static void VentanaDefault();

};
