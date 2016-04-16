#pragma once
#include "CCena.h"

class CCenaMenu : public CCena
{
public:
	CCenaMenu();
	CCenaMenu(const char* cena);
	~CCenaMenu();

	virtual void Initialize();
	virtual void Finalize();
	virtual void Update();
	virtual void Render();
};
