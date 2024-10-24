#pragma once
#include "Entidad.h"
class Companero : public Entidad
{

public:
	Companero(int, int y); 
	void MovimientoAutomaticoNPC(Graphics^ canvas);
};
