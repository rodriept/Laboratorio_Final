#include "Triangulo.h"

int Triangulo::ObtenerArea()
{
	return Poligono::area() / 2;
}

int Triangulo::ObtenerPerimetro()
{
	return (2 * GetArista()) + Getarista2();
}