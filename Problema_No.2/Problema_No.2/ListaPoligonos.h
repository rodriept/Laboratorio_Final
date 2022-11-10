#pragma once
ref class ListaPoligonos
{
private: 
	System::String^ Poligono;
	int base;
	int altura;
public:
	ListaPoligonos(System::String^ _UnPoligono, int _UnaBase, int _UnaAltura)
	{
		_UnPoligono = Poligono;
		_UnaBase = base;
		_UnaAltura = altura;
	}
};

