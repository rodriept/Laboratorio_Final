#pragma once
#include "Poligono.h"
#include <math.h>
class Triangulo : public Poligono
{
public:
	using Poligono::Poligono;
	int ObtenerArea();
	int ObtenerPerimetro();
};

