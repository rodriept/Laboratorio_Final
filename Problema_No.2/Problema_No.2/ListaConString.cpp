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
bool ListaConString::empty() 
{
	return (this->Primero == nullptr);
}
string ListaConString::print()
{
	string dato = "";
	NodoString* temp = Primero;
	while (temp != nullptr) {
		dato += temp->elemento + " \n";
		temp = temp->Next;
	}
	return dato;
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

string ListaConString::top()
{
	string elemento; 
	if (!this->empty())
	{
		elemento = this->Primero->obtenerDato();
	}
	return elemento;
}
