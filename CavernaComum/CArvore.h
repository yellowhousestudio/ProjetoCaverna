#pragma once

#include "CTile.h"

class CArvore : CTile // Criei está classe porém não sei se está certa!!! pois queria fzer uma herança da classe CTile;
{
private:

	int tipoArvore;

public:
	CArvore(int tipo);
	~CArvore();

	virtual void Initialize();
	
};
