#ifndef LIST_H
#define LIST_H
#include <string>
#include <stdlib.h>
#include "NodoString.h"
#pragma once

using namespace std;

class ListaConString
{
private:
	NodoString* Primero;
	int index; 
public: 
    ListaConString();
    ~ListaConString();

    bool empty();
    string print();
    string add(string);
    string pop();
    string top();

};
#endif

