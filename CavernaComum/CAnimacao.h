#pragma once
#include "CEstado.h";

class CAnimacao
{
private:
	CEstado* estado;
	int startFrame;
	int countFrame;
	long timeMilli;

public:

	CAnimacao(CEstado* cE, int st, int count, long time);
	~CAnimacao();
	
};
