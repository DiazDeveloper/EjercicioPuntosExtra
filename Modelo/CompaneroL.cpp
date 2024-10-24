#include "pch.h"
#include "CompaneroL.h" 

CompaneroL::CompaneroL(int x, int y) : Entidad(x, y, "Images/bruno.png", 4)
{
    dx = dy = 15;
    movimiento = Abajo;
}

void CompaneroL::MovimientoAutomaticoNPCL(Graphics^ canvas)
{

    if (movimiento == Arriba)
    {
        y -= dy;
        indiceAlto = 3;
        if (y < 0)
        {
            movimiento = Abajo;
        }
    }

    if (movimiento == Abajo)
    {
        y += dy;
        indiceAlto = 0;
        if (y + alto >= canvas->VisibleClipBounds.Height)
        {
            movimiento = Arriba;
        }
    }

    indiceAncho++;
    if (indiceAncho >= frames)
    {
        indiceAncho = 0;
    }

    mostrar(canvas);
}

