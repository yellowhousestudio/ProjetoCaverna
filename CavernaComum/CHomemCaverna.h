#pragma once

#include "CPersonagens.h"


class CHomemCaverna : CPersonagens // Criei est� classe por�m n�o sei se est� certa!!! pois queria fzer uma heran�a da classe CSprite;
{
private:
	CAnimacao* cA_Andando;
	CAnimacao* cA_Atirando;
	CAnimacao* cA_Atacando;
	CAnimacao* cA_Parado;

public:
	CHomemCaverna();
	~CHomemCaverna();

	virtual void Initialize();

};
