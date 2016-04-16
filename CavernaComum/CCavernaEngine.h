#pragma once
#include"CCena.h"
#include"CCenaCapa.h"
#include "CCenaAbertura.h"
#include "CCenaJogo.h"
#include "CCenaMenu.h"

class CCavernaEngine
{
private:
	int qtCenas;
	CCena **cenas;
	CCena* cenaAtual;

public:

	CCavernaEngine();
	~CCavernaEngine();

	void Update();
	void Render();
	void Initialize();
	void Finalize();

};