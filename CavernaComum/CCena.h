#pragma once

class CCena
{
private:
	const char* nomeCena;
	int acao; //Próxima cena, indica o indice da próxima cena, -1 é igual sem acao.

public:
	CCena();
	CCena(const char* cena);
	~CCena();
	
	virtual void Initialize();
	virtual void Finalize();
	virtual void Update();
	virtual void Render();

	// Retorna para a cena que deve mudar ou -1 para não mudar
	int Change();

};
