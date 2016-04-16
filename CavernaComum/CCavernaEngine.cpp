#include "pch.h"
#include "CCavernaEngine.h"

CCavernaEngine::CCavernaEngine()
{

}

CCavernaEngine::~CCavernaEngine()
{
	for (int i = 0; i < qtCenas; i++)
		if(cenas[i] != NULL)
			delete cenas[i];

	if (cenas != NULL)
		delete cenas;
}

void CCavernaEngine::Initialize()
{
	//Iniciando cenas
	qtCenas = 4;
	*cenas = new CCena[qtCenas];
	cenas[0] = new CCenaCapa("Capa");
	cenas[1] = new CCena("Abertura");
	cenas[2] = new CCena("Menu");
	cenas[3] = new CCena("Jogo");

	for( int i = 0; i < qtCenas; i++)
		cenas[i]->Initialize();
	
	cenaAtual = cenas[0];
}

void CCavernaEngine::Update()
{
	int acao = cenaAtual->Change();
	if (acao != -1)
	{
		if(acao >= qtCenas)
			cenaAtual = cenas[0];
		else
			cenaAtual = cenas[acao];
	}

	cenaAtual->Update();
}

void CCavernaEngine::Render()
{
	cenaAtual->Render();
}

void CCavernaEngine::Finalize()
{
	for (int i = 0; i < qtCenas; i++)
		cenas[i]->Finalize();
}
