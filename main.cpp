/* #include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iomanip>
using namespace std;

int MOEDA, creditos, troco;
string REFRIGERANTE;
bool LMEET, LETIRPS, RESET, TROCO, D025, D050, D100, certo;
int depositar(), verificar_refri(), verificar(), reset();
*/

//#include "main.h"

#include "Log.h"
#include "Nodo.h"
#include "Machine.h"
#include "PC_machine.h"


int main(){

	PC_machine objetoMachine;
	cout << "Iniciando maquina...\n\n\n";
	objetoMachine.startmachine();

	}

/* int depositar(){
	cout << "\nInsira o valor desejado\n25 creditos\n50 creditos\n100 creditos" << endl;
	cin >> MOEDA;
	if (MOEDA == 25){
		creditos = creditos + 25;
		MOEDA = 0;
		}
	else if (MOEDA == 50){
		creditos = creditos + 50;
		MOEDA = 0;
		}
	else if (MOEDA == 100){
		creditos = creditos + 100;
		MOEDA = 0;
		}
    else{
        cout << "\n>>Apenas de 25, 50 ou 100!!\n\n";
    }
	return(creditos);
}   */

/* int verificar_refri(){
	if (REFRIGERANTE == "meet"){
		LMEET = true;
		certo = true;
		}
		else if (REFRIGERANTE == "etirps"){
		LETIRPS = true;
		certo = true;
		}
		else if (REFRIGERANTE == "LOG"){
			//objLOG.totalCompras();
		}
		else{
			certo = false;  // ****** CHEGOU AQUI DE QLQR JEITO
			while(certo == false){
				cout << ">>Selecione o refrigerante, Meet ou Etirps.\n";
				cin >> REFRIGERANTE;
				if (REFRIGERANTE == "meet"){
					LMEET = true;
					certo = true;
				}
				else if (REFRIGERANTE == "etirps"){
					LETIRPS = true;
					certo = true;
				}
				else{
					certo = false;
				}
			}
		}
}   */

/*  int verificar(){

	while (creditos < 150){
		cout << "\n>>Seu credito e: " << creditos << "\n" << "\n>>Adicione mais moedas\n\n";
		depositar();	//	VERIFICAR
		}

	if (creditos == 150){
		verificar_refri();
	} // se chegar nesta linha j� pode reiniciar o programa =>> S000

	else if (creditos > 150){
		troco = creditos - 150;
		creditos = 150;
		TROCO = true;
		verificar_refri();
	}
}       */

/* int reset(){
	MOEDA = 0;
	creditos = 0;
	troco = 0;
	LMEET = false;
	LETIRPS = false;
} */
