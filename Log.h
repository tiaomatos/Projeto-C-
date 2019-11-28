#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

#include <iostream>

#include "Nodo.h"

using namespace std;

class Log{
	Nodo* head;

	public:
		Log();
		~Log();
		void insertBeforeFirst(int refri, float valor);
		void insertAfterLast(int refri, float valor);
		int readFirstVal();
		int readFirstRefri();
		void removeFirst();
		void totalCompras();
};



#endif // LOG_H_INCLUDED
