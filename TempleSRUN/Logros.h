#pragma once
class Logros
{
private:
	char NombreLogro;
	int CantidadSuperada, Recompensas, dificultad, CantidadLogros;

public:
	void Desbloquear(int dificultad, int CantidadSuperada);
	void GenerarRecompensa(int Recompensas);
	void IdentificarLogro(char NombreLogro);
	void ObtenerInformacion();
};

