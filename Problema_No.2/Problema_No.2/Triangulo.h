#pragma once
#include "Poligono.h"
#include <math.h>
class Triangulo : public Poligono
{
private:
	int Lado;
public:
	using Poligono::Poligono;
	int ObtenerArea();
	int ObtenerPerimetro();
	void SetLado();
};

