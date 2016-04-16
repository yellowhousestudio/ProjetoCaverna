#pragma once
#include "CCena.h"

class CCenaAbertura : public CCena
{
public:
	CCenaAbertura();
	CCenaAbertura(const char* cena);
	~CCenaAbertura();

	virtual void Initialize();
	virtual void Finalize();
	virtual void Update();
	virtual void Render();
};
