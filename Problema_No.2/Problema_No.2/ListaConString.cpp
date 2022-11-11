#include "ListaConString.h"
//Destructor
ListaConString::~ListaConString()
{
}
//Constructor Vacío
ListaConString::ListaConString()
{
	index = 0; 
	Primero = nullptr;
}
//Verificar si la lista esta vacía o no
bool ListaConString::empty() 
{
	return (this->Primero == nullptr);
}

//Insertar un dato 

string ListaConString::add(string _Elemento) 
{
	NodoString* New_Nodo = new NodoString(_Elemento);

	New_Nodo->Next = Primero;
	Primero = New_Nodo;

	return _Elemento;
	index++;
}
//Obtener el elemento
string ListaConString::pop()
{
	string elemento; 
	if (!this->empty())
	{
		NodoString* tope = this->Primero;
		this->Primero = tope->obtenerSiguiente();

		elemento = tope->obtenerDato();
		delete tope;
	}
	return elemento;
}


