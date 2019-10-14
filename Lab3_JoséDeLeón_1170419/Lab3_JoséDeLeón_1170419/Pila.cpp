#include "Pila.h"


Pila::Pila() {
	Nelemento = 0;
}

Pila::~Pila() {
}

void Pila::Apilar(Carta valor) {
	NodoCarta* NodoNuevo = new NodoCarta();
	NodoNuevo->valor = valor;//asigna la carta al nodo

	if (Head == nullptr) {
		Head = NodoNuevo;
	}
	else {
		NodoCarta* Aux = new NodoCarta();
		Head = NodoNuevo;
		Head->siguiente = Aux;
	}
	Nelemento++;
}

Carta Pila::Desapilar() {
	if (Head == nullptr) {
		return *new Carta();
	}
	else {
		Carta valor = Head->valor;
		Head = Head->siguiente;
		Nelemento--;
		return valor;
	}
}


Carta Pila::ObtenerCima() {
	if (Head == nullptr) {
		return *new Carta;
	}
	else {
		return Head->valor;
	}
}