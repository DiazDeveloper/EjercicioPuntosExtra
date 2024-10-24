#include "pch.h"
#include "Entidad.h"


void Entidad::cambiarImagen(char* nombreArchivo)
{
	strcpy(imagen, nombreArchivo);
	Bitmap^ sprite = gcnew Bitmap(gcnew System::String(imagen));
	ancho = sprite->Width / frames;
	alto = sprite->Height / frames;
	delete sprite;
}

void Entidad::dibujarImagen(Graphics^ canvas, Bitmap^ sprite, Rectangle zoom, Rectangle corte)
{
	canvas->DrawImage(sprite, zoom, corte, GraphicsUnit::Pixel);
}

Entidad::Entidad(int x, int y, char* imagen, int frames)
{
	this->indiceAlto = 0;
	this->indiceAncho = 0;
	this->x = x;
	this->y = y;
	this->imagen = new char[48];
	this->frames = frames;
	cambiarImagen(imagen);

}

void Entidad::mostrar(Graphics^ canvas)
{
	Bitmap^ sprite = gcnew Bitmap(gcnew System::String(imagen));
	Rectangle corte = Rectangle(indiceAncho * ancho, indiceAlto * alto, ancho, alto);
	Rectangle zoom = Rectangle(x, y, ancho, alto);
	dibujarImagen(canvas, sprite, zoom, corte);
}

void Entidad::mover(Graphics^ canvas)
{
}

Rectangle Entidad::getRectangle()
{
	return Rectangle(x, y, alto, ancho);
}

int Entidad::getX()
{
	return x;
}

int Entidad::getY()
{
	return y;
}

int Entidad::getAlto()
{
	return alto;
}

int Entidad::getAncho()
{
	return ancho;
}

bool Entidad::hayColision(Entidad* entidad)
{
	return getRectangle().IntersectsWith(entidad->getRectangle());
}
