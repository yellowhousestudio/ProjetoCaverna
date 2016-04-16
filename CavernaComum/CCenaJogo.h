#pragma once
#include "CCena.h"

class CCenaJogo : CCena
{
public:
	CCenaJogo();
	CCenaJogo(const char* cena);
	~CCenaJogo();

	virtual void Initialize();
	virtual void Update();
	virtual void Render();
	virtual void Finalize();
};
