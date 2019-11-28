#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <iostream>

using namespace std;

class Nodo {
	float valor;
	int refri;
	Nodo* next;

	public:
		Nodo(int refri, float valor, Nodo* nxt);
		~Nodo();
		Nodo* getNext();
		void setNext(Nodo* nxt);
		int getRefri();
		float getValrefri();
};


#endif
