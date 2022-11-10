#include "NodoPoligonos.h"
//CONSTRUCTOR ESTA VACÍO
NodoPoligonos::NodoPoligonos()
{
	this->elemento = elemento;
	this->Next = nullptr;
}

//CONSTRUCTOR CON LOS PARAMAETROS
NodoPoligonos::NodoPoligonos(int _elemento)
{
	elemento = _elemento;
	Next = nullptr;
}
int NodoPoligonos::ObtenerDato()
{
	return this->elemento;
}
NodoPoligonos* NodoPoligonos::ObtenerSiguiente()
{
	return this->Next;
}

//DESTRUCTOR
NodoPoligonos::~NodoPoligonos() 
{
}
