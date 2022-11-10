#include "ListaPoligonos.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

ListaPoligonos::~ListaPoligonos()
{}
//CONSTRUCTOR VACIO 
ListaPoligonos::ListaPoligonos()
{
	index = 0;
	Primero = nullptr;
}
bool ListaPoligonos::empty()
{
	return(this->Primero == nullptr);
}

//Insertar un nodo
int ListaPoligonos::add(int _Elemento)
{
	NodoPoligonos* NewNodo = new NodoPoligonos(_Elemento);
	NewNodo->Next = Primero;
	Primero = NewNodo;

	return _Elemento;
	index++;
}

//Imprimir la información de la lista
int ListaPoligonos::print()
{
	int dato = 0;
	NodoPoligonos * Temp = Primero;
	while (Temp != nullptr)
	{
		dato = Temp->elemento;
		Temp = Temp->Next;
	}
	return dato;
}

int ListaPoligonos::pop()
{
	int Elemento;
	if (!this->empty())
	{
		NodoPoligonos* tope = this->Primero;
		this->Primero = tope->ObtenerSiguiente();

		Elemento = tope->ObtenerDato();
		delete tope;
	}
	return Elemento;
}

int ListaPoligonos::top()
{
	int Elemento; 
	if (!this->empty())
	{
		Elemento = this->Primero->ObtenerDato();
	}
	return Elemento;
}