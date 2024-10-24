#pragma once
#include "Background.h"
#include "Juego.h"
#include "Player.h"
#include "Companero.h"
#include "CompaneroL.h"

class Juego
{

private:
	Background* background;
	Player* player;

	Companero* companero1;
	Companero* companero2;
	Companero* companero3;

	CompaneroL* companeroL1;
	CompaneroL* companeroL2;
	CompaneroL* companeroL3;

public:
	Juego();
	void mostrar(Graphics^ canvas);
	void mover(Graphics^ canvas);
	void moverTeclas(Graphics^ canvas, Movimiento movimiento);
};

