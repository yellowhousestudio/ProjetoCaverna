#pragma once

#include "CSprite.h"

class CPersonagens : public CSprite // Criei está classe porém não sei se está certa!!! pois queria fzer uma herança da classe CSprite;
{
private:

	long dano; //Danos para o personagem...
	bool temIA = true;



public:
	CPersonagens();
	~CPersonagens();

	virtual void Initialize();

};
