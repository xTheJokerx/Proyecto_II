#pragma once
#include"NodoGrupo.h"

class ContenedorLGrupo {
private:
	NodoGrupo* ppioGrupo;
public:
	ContenedorLGrupo();
	~ContenedorLGrupo();
	NodoGrupo* getPpioGrupo();
	void setPpioGrupo(NodoGrupo*);


	void IngresaGrupo(Grupo*);
	void MuestraGrupos();
	void EliminaGrupo(Grupo*);
};