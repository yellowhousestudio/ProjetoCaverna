#include "pch.h"
#include "CAnimacao.h"


CAnimacao::CAnimacao(CEstado* cE, int st, int count, long time)
{
	estado = cE;
	startFrame = st;
	countFrame = count;
	timeMilli = time;
}

CAnimacao::~CAnimacao()
{

}


