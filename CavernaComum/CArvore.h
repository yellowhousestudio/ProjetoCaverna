#pragma once

#include "CTile.h"

class CArvore : CTile // Criei est� classe por�m n�o sei se est� certa!!! pois queria fzer uma heran�a da classe CTile;
{
private:

	int tipoArvore;

public:
	CArvore(int tipo);
	~CArvore();

	virtual void Initialize();
	
};
