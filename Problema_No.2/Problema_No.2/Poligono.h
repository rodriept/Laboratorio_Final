#pragma once
class Poligono
{
private:
	int arista1;
	int arista2;
	int ID;
public:
	Poligono(int _Arista, int _Arista2);

	//Setters y getters

	int	GetId();
	void SetId(int Id);

	int GetArista();
	void SetArista(int Arista);
	
	int Getarista2();
	void Setarista2(int arista2);

	int area();
	int perimetro();

};

