#pragma once
#include "CTile.h"
#include "CEstado.h"
#include "CAnimacao.h"

class CSprite : public CTile 
{
private: 
	
	long rotacao; //rota��o acho que deve ser long...
	CEstado* estadoAtual; // estado ser� como o objeto se encontra, pois se ele est� parado ou mexendo... 
	//long corTransparente;  // cor n�o sei se � bool, pois define se o desenho est� ou n�o transparente...
	
	//CAnimacao animacao; // defini��o da anima��o do objeto..
	

protected:  //Coloquei o mesmo dados do Tile aqui por�m n�o sei se est� certo..


public:
	CSprite();
	~CSprite();

	virtual void Initialize();
	virtual void Render();// n�o sei se usa...
	virtual void Update();// n�o sei se usa..
};
