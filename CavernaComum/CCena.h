#pragma once

class CCena
{
private:
	const char* nomeCena;
	int acao; //Pr�xima cena, indica o indice da pr�xima cena, -1 � igual sem acao.

public:
	CCena();
	CCena(const char* cena);
	~CCena();
	
	virtual void Initialize();
	virtual void Finalize();
	virtual void Update();
	virtual void Render();

	// Retorna para a cena que deve mudar ou -1 para n�o mudar
	int Change();

};
