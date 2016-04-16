#include "pch.h"
#include "CArvore.h"

CArvore::CArvore(int tipo)
{
	tipoArvore = tipo;
}

CArvore::~CArvore()
{

}

void CArvore::Initialize()
{
	Configure(150, 150, 5, 2, "arvores.png");
	SetFrame(tipoArvore);
}
