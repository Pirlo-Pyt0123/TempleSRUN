#pragma once
class PersonajePrincipal
{
private:
	float posicionx, posiciony;
	float VidaPersonaje;


public:
	void ControlMoverse(int posicionX, int posicionY);
	void Velocidad();
	void Salto();
	void Deslizamiento();
	void Impacto();
};

