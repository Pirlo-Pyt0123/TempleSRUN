#pragma once
class Escenario
{
private:
	float posX, posY, tiempo;
	int iluminacion, iluminacion, sonido;

public:
	void PosicionCamara(float posX, float posY);
	void Velocidad(float tiempo);
	void EstadoEscenario(int clima, int iluminacion, int sonido);
	void GenerarObstaculo(float posX, float posY);

};

