#include "pch.h"
#include "CCena.h"

CCena::CCena()
{

}
CCena::CCena(const char* cena)
{
	nomeCena = cena;
}

CCena::~CCena()
{

}

void CCena::Initialize()
{
	acao = -1;
}

void CCena::Finalize()
{

}

void CCena::Update()
{

}

void CCena::Render()
{

}

int CCena::Change()
{
	if (acao == -1)
		return -1;

	int i = acao;
	acao = -1;

	return i;
}