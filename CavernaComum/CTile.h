#pragma once

#include "CObjeto.h"

class CTile : public CObjeto
{
private:
	long image;  //Não sei se declara assim a imagem...
	//long posX;VERIFICAR SE É PRECISO;
	//long posY;VERIFICAR SE É PRECISO;
	bool bloqueio=false;

	// Variáveis de controle..
	int sizeX; //Tamanho X do Tile..
	int sizeY; //Tamanho Y do Tile..
	int quantX; //quantidades de Tiles na imagem na horizontal..
	int quantY; //quantidades de Tiles na imagem na vertical..
	const char* fileImage;

	int frameSelected;

	//Variáveis calculadas..
	int x1, y1, x2, y2; //Valores calculados..



public:
	CTile();
	~CTile();

	void Configure(int sx, int sy, int qx, int qy, const char* fileI);
	void SetFrame(int s);

	virtual void Initialize();
	virtual void Render();
	virtual void Update();
};

