#include "Poligono.h"

Poligono::Poligono(int _Arista1, int _Arista2)
{
	arista1 = _Arista1;
	arista2 = _Arista2;
}

int Poligono::area()
{
	return arista1 * arista2;
}

int Poligono::perimetro()
{
	return ((2 * arista1) + (2 * arista2));
}

int Poligono::GetId()
{
	return ID;
}

void Poligono::SetId(int Id)
{
	ID = Id;
}

void Poligono::SetArista(int _arista)
{
	arista1 = _arista;
}

void Poligono::Setarista2(int _Arista2)
{
	arista2 = _Arista2;
}

int Poligono::GetArista()
{
	return arista1;
}

int Poligono::Getarista2()
{
	return arista2;
}