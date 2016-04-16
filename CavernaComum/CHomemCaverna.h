#pragma once

#include "CPersonagens.h"


class CHomemCaverna : CPersonagens // Criei está classe porém não sei se está certa!!! pois queria fzer uma herança da classe CSprite;
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
