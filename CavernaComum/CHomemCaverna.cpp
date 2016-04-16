#include "pch.h"
#include "CHomemCaverna.h"
#include "CTile.h"

CHomemCaverna::CHomemCaverna() //Coloquei o mesmo dados do Tile aqui porém não sei se está certo..
{
	
}

CHomemCaverna::~CHomemCaverna()
{
	delete cA_Andando;
	delete cA_Atirando;
	delete cA_Atacando;
	delete cA_Parado;
}

void CHomemCaverna::Initialize()
{ 
	//configuração do Tile
	Configure(200, 250, 5, 2, "homemCaverna.png");

	//Criar estado dessa classe
	CEstado* cE_Parado = new CEstado("PARADO");
	CEstado* cE_Andando = new CEstado("ANDANDO");
	CEstado* cE_Atirando = new CEstado("ATIRANDO");
	CEstado* cE_Atacando = new CEstado("ATACANDO");

	cA_Andando = new CAnimacao(cE_Andando, 0,4,100);
	cA_Atirando = new CAnimacao(cE_Atirando, 4,2,100);
	cA_Atacando = new CAnimacao(cE_Atacando, 6,3,100);
	cA_Parado = new CAnimacao(cE_Parado, 9,1,100);
}