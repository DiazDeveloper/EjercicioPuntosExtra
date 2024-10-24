#pragma once
#include "Entidad.h"
class CompaneroL : public Entidad
{

public:
	CompaneroL(int, int y);
	void MovimientoAutomaticoNPCL(Graphics^ canvas);
};
