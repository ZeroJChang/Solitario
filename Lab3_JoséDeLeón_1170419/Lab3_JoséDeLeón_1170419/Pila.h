#pragma once

#include "NodoCarta.h"
#include "Carta.h"
#include <string>
class Pila
{
private: 
	NodoCarta* Head = nullptr;
	int Nelemento = 0;

public:
	void Apilar(Carta valor);
	Carta Desapilar();
	Carta ObtenerCima();
	Pila();
	~Pila();
};

