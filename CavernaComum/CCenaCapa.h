#pragma once
#include "CCena.h"

class CCenaCapa : public CCena 
{
public:
	CCenaCapa();
	CCenaCapa(const char* cena);
	~CCenaCapa();

	virtual void Initialize();
	virtual void Finalize();
	virtual void Update();
	virtual void Render();
};