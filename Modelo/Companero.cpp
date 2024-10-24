#include "pch.h"
#include "Companero.h"

Companero::Companero(int x, int y) : Entidad(x, y, "Images/bruno.png", 4)
{
	dx = dy = 15;
	movimiento = Derecha;   
}

void Companero::MovimientoAutomaticoNPC(Graphics^ canvas)
{
    if (movimiento == Derecha)
    {
        indiceAlto = 2;
        x += dx;
        if (x + ancho > canvas->VisibleClipBounds.Width)
        {
            movimiento = Izquierda;  
        }
    }
    else if (movimiento == Izquierda)
    {
        indiceAlto = 1;
        x -= dx;  
        if (x < 0)
        {
            movimiento = Derecha; 
        }
    }

    indiceAncho++;
    if (indiceAncho >= frames)
    {
        indiceAncho = 0; 
    }

    mostrar(canvas);
}

