#include "Nodo.h"
//#include "main.h"

Nodo::Nodo(int s, float p, Nodo* nxt){
       refri = s;
       valor = p;
       next = nxt;
}

Nodo::~Nodo(){

}

float Nodo::getValrefri(){
     return valor;
}

int Nodo::getRefri(){
     return refri;
}

Nodo* Nodo::getNext(){
     return next;
}

void Nodo::setNext(Nodo* nxt){
       next = nxt;
}
