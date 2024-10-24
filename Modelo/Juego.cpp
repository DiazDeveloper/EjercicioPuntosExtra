#include "pch.h"
#include "Juego.h"

Juego::Juego() 
{
	background = new Background();
	player = new Player(10, 150);
	companero1 = new Companero(10, rand() % 250 + 150);  
	companero2 = new Companero(10, rand() % 250 + 150);
	companero3 = new Companero(10, rand() % 250 + 150);

	companeroL1 = new CompaneroL(rand() % 200 + 1, 10); 
	companeroL2 = new CompaneroL(rand() % 200 + 1, 10); 
	companeroL3 = new CompaneroL(rand() % 200 + 1, 10); 
}

void Juego::mostrar(Graphics^ canvas)
{
	background->mostrar(canvas);
	player->mostrar(canvas);
	companero1->mostrar(canvas);
	companero2->mostrar(canvas);
	companero3->mostrar(canvas); 

	companeroL1->mostrar(canvas);
	companeroL2->mostrar(canvas);
	companeroL3->mostrar(canvas);
}

void Juego::mover(Graphics^ canvas)
{
	background->mover(canvas); 
	companero1->MovimientoAutomaticoNPC(canvas);
	companero2->MovimientoAutomaticoNPC(canvas);
	companero3->MovimientoAutomaticoNPC(canvas);

	companeroL1->MovimientoAutomaticoNPCL(canvas); 
	companeroL2->MovimientoAutomaticoNPCL(canvas);  
	companeroL3->MovimientoAutomaticoNPCL(canvas);
}

void Juego::moverTeclas(Graphics^ canvas, Movimiento movimiento)
{
	player->MoverTeclar(canvas, movimiento);
}
