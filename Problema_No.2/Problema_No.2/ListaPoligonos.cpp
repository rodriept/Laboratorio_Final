#include "ListaPoligonos.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
//Destructor
ListaPoligonos::~ListaPoligonos()
{}
//CONSTRUCTOR VACIO 
ListaPoligonos::ListaPoligonos()
{
	index = 0;
	Primero = nullptr;
}
//Verificar si esta vacío la lista
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

