#include "Triangulo.h"

int Triangulo::ObtenerArea()
{
	return Poligono::area() / 2;
}

int Triangulo::ObtenerPerimetro()
{
	return (2 * Lado) + Getarista2();
}

void Triangulo::SetLado()
{
	Lado = sqrt((pow(GetArista(), 2) + pow(Getarista2(), 2)));
}