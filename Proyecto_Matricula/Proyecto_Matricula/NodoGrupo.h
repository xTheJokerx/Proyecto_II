#pragma once
#include"Grupo.h"

class NodoGrupo {
private:
	Grupo* ptrGrupo;
	NodoGrupo* ptrNodoGrupo;
public:
	NodoGrupo();
	NodoGrupo(Grupo*, NodoGrupo*);
	~NodoGrupo();

	void setGrupo(Grupo*);
	void setSiguienteGrupo(NodoGrupo*);

	Grupo* getGrupo();
	NodoGrupo* getSiguienteGrupo();

};