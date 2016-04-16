#include "pch.h"
#include "CTile.h"


//contrutor...
CTile::CTile()
{

}

//descontrutor...
CTile::~CTile()
{

}

void CTile::Configure(int sx, int sy, int qx, int qy, const char* fileI)
{
	sizeX = sx;
	sizeY = sy;
	quantX = qx;
	quantY = qy;
	fileImage = fileI;
}

void CTile::SetFrame(int s) 
{
	 frameSelected = s;
}

void CTile::Initialize()
{ 
	//Calcular quadro do Tile na imagem..
	x1 = sizeX*frameSelected;
	if (frameSelected > 4)
		x1 -= sizeX* quantX;

	y1 = sizeY*frameSelected;
	if (frameSelected > 4)
		y1 = sizeY* quantY;

	x2 = x1 + sizeX;
	y2 = y2 + sizeY;

	// TODO: Carregar imagem na memória;
}

void CTile::Render()
{

}

void CTile::Update()
{

}
