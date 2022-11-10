#pragma once
#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;
class NodoPoligonos
{
public: 
	NodoPoligonos();
	NodoPoligonos(int);
	int ObtenerDato();
	NodoPoligonos* ObtenerSiguiente();
	~NodoPoligonos();

	NodoPoligonos* Next;
	int elemento;

};
#endif

