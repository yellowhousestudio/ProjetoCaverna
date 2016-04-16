#pragma once
#include "CTile.h"
#include "CEstado.h"
#include "CAnimacao.h"

class CSprite : public CTile 
{
private: 
	
	long rotacao; //rotação acho que deve ser long...
	CEstado* estadoAtual; // estado será como o objeto se encontra, pois se ele está parado ou mexendo... 
	//long corTransparente;  // cor não sei se é bool, pois define se o desenho está ou não transparente...
	
	//CAnimacao animacao; // definição da animação do objeto..
	

protected:  //Coloquei o mesmo dados do Tile aqui porém não sei se está certo..


public:
	CSprite();
	~CSprite();

	virtual void Initialize();
	virtual void Render();// não sei se usa...
	virtual void Update();// não sei se usa..
};
