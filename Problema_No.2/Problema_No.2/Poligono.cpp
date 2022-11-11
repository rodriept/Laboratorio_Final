#include "Poligono.h"

Poligono::Poligono(int _Arista1, int _Arista2)
{
	arista1 = _Arista1;
	arista2 = _Arista2;
}

//calculo del area del rectangulo y cuadrado
int Poligono::area()
{
	return arista1 * arista2;
}
//Calculo del perímetro del rectangulo y cuadrado
int Poligono::perimetro()
{
	return ((2 * arista1) + (2 * arista2));
}
//Obtener el ID de la figura
int Poligono::GetId()
{
	return ID;
}
//Ingresar el ID a la variable privada de la clase Poligono
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