#include "pch.h"
#include "Background.h"

Background::Background()
	:Entidad(0, 0, "Images/Pueblo_Paleta.png", 1)
{

}

void Background::dibujarImagen(Graphics^ canvas, Bitmap^ sprite, Rectangle zoom, Rectangle corte)
{
	ancho = canvas->VisibleClipBounds.Width;
	alto = canvas->VisibleClipBounds.Height;
	canvas->DrawImage(sprite, 0, 0, ancho, alto);
}