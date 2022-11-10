#pragma once
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;
class NodoString
{
public: 
    NodoString();
    NodoString(string);
    string obtenerDato();
    NodoString* obtenerSiguiente();

    ~NodoString();

    NodoString* Next;
    string elemento;
};
#endif

