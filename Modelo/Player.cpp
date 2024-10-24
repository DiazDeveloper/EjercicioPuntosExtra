#include "pch.h"
#include "Player.h"

Player::Player(int x, int y) : Entidad(x, y, "Images/rojo.png", 4)
{
	dx = dy = 7;  // movimiento jugador 
	movimiento = Abajo;
}

void Player::MoverTeclar(Graphics^ canvas, Movimiento movimiento)
{
	switch (movimiento)
	{
	case Arriba:
		y -= dy;
		indiceAlto = 3;
		break;
	case Abajo:
		y += dy;
		indiceAlto = 0;
		break;
	case Derecha:
		x += dx;
		indiceAlto = 2;
		break;
	case Izquierda:
		x -= dx;
		indiceAlto = 1;
		break;
	default:
		break;
	}
	if (x < 0)
	{
		x = 0;
	}

	if (y < 0)
	{
		y = 0;
	}

	if (x + ancho > canvas->VisibleClipBounds.Width)
	{
		x = canvas->VisibleClipBounds.Width - ancho;
	}

	if (y + alto > canvas->VisibleClipBounds.Height)
	{
		y = canvas->VisibleClipBounds.Height - alto;
	}

	indiceAncho++;
	if (indiceAncho > 3)
	{
		indiceAncho = 0;
	}

}

Movimiento Player::getMovimiento()
{
	return movimiento;
}
