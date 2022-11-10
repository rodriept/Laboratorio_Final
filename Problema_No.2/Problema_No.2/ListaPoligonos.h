#pragma once
#ifndef LISTA_H
#define LISTA_H

#include <string>
#include <stdlib.h>

#include "NodoPoligonos.h"

using namespace std;
class ListaPoligonos
{
private:
	NodoPoligonos* Primero;
	int index;
public: 
    ListaPoligonos();
    ~ListaPoligonos();

    bool empty();
    int add(int);
    int print();
    int pop();
    int top();

};
#endif

