#pragma once

#include "CSprite.h"

class CPersonagens : public CSprite // Criei est� classe por�m n�o sei se est� certa!!! pois queria fzer uma heran�a da classe CSprite;
{
private:

	long dano; //Danos para o personagem...
	bool temIA = true;



public:
	CPersonagens();
	~CPersonagens();

	virtual void Initialize();

};
