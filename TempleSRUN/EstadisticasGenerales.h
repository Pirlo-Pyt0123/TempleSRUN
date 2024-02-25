#pragma once
class EstadisticasGenerales
{
private:
	int partidasJugadas;
	int partidasGanadas;
	int partidasPerdidas;
	float puntajeMaximo;
public:
	void incrementoPartidas();
	void actualizarPuntajeMaximo();
	int obtenerPartidas();
	int obtenerPuntajeMaximo();

};

