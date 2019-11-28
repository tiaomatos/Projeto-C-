#ifndef PC_MACHINE_H_INCLUDED
#define PC_MACHINE_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include "Machine.h"

using namespace std;

class PC_machine : public Machine{
	int D025, D050, D100;
	int total, MOEDA, troco;
	bool devolucao, LMEET, LETIRPS, RESET;
	string REFRIGERANTE;
	int refri, sel;

	public:
		PC_machine(void);
		~PC_machine(void);
		float acumulado();
		int valortroco (int total);
        int verificar(), depositar();
        int verificar_refri();
		int reset();
		int creditos;
		void startmachine();
};



#endif // PC_MACHINE_H_INCLUDED
