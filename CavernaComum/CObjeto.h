#pragma once

class CObjeto
{
private:
	long posX;
	long posY;
	bool ativo;

public:
	CObjeto();
	~CObjeto();
	
	virtual void Initialize();
	virtual void Render();
	virtual void Update();
};

