#include "Triangulo.h"

//Obtener el area de un triangulo de la clase Poligono
int Triangulo::ObtenerArea()
{
	return Poligono::area() / 2;
}
//Obtener el perimetro del triangulo con herencia de la clase Poligono
int Triangulo::ObtenerPerimetro()
{
	return (2 * Lado) + Getarista2();
}
//Obtener el lado del triangulo con herencia de la clase Poligono
void Triangulo::SetLado()
{
	Lado = sqrt((pow(GetArista(), 2) + pow(Getarista2(), 2)));
}