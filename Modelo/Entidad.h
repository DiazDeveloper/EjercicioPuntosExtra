#pragma once
#include <string.h>
#include <iostream>
using namespace std;
using namespace System;
using namespace System::Drawing;
enum Movimiento
{
	Arriba, Abajo, Derecha, Izquierda
};

class Entidad
{
protected:
	int x;
	int y;
	int dx, dy;
	int alto, ancho;
	int indiceAncho, indiceAlto;
	char* imagen;
	int frames;
	Movimiento movimiento;

	void cambiarImagen(char* nombreDelArchivo);
	virtual void dibujarImagen(Graphics^ canvas, Bitmap^ sprite, Rectangle zoom, Rectangle corte
	);

public:
	Entidad(int x, int y, char* imagen, int frames);
	virtual void mostrar(Graphics^ canvas);
	virtual void mover(Graphics^ canvas);
	Rectangle getRectangle();
	int getX();
	int getY();
	int getAlto();
	int getAncho();
	bool hayColision(Entidad* entidad);

};

