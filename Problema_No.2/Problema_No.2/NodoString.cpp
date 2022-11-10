#include "NodoString.h"
//Constructo vac�o
NodoString::NodoString()
{
	this->elemento = elemento;
	this->Next = nullptr;
}

//Constructor con par�metros 
NodoString::NodoString(string _Elemento)
{
	elemento = _Elemento;
	Next = nullptr;
}

string NodoString::obtenerDato()
{
	return this->elemento;
}

NodoString* NodoString::obtenerSiguiente()
{
	return this->Next;
}

//Destructor
NodoString::~NodoString() 
{
}
