#include "PC_machine.h"
#include "log.h"
#include "main.h"

using namespace std;

PC_machine :: PC_machine(){
	D025 = 0;
	D050 = 0;
	D100 = 0;
	sel = 0;
	total = 0;
	devolucao = false;
	refri = 0;
}

PC_machine :: ~PC_machine(){
}


int PC_machine :: reset(){
    MOEDA = 0;
	troco = creditos - 150;
	creditos = 0;
	LMEET = false;
	LETIRPS = false;
    }

int PC_machine :: depositar(){
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
		troco = creditos - 150;
		MOEDA = 0;
		}
    else{
        cout << "\n>>Apenas de 25, 50 ou 100!!\n\n";
    }
	return(creditos);
	return (troco);
    }

int PC_machine :: verificar(){
    while (creditos < 150){
		cout << "\n>>Seu credito e: " << creditos << "\n" << "\n>>Adicione mais moedas\n\n";
		depositar();	//	VERIFICAR
		}

	if (creditos == 150){
		verificar_refri();
	}

	else if (creditos > 150){
		troco = creditos - 150;
		creditos = 150;
		TROCO = true;
		verificar_refri();
	}
    }

int PC_machine :: verificar_refri(){
  {
	if (REFRIGERANTE == "meet"){
		LMEET = true;
		certo = true;
		}
		else if (REFRIGERANTE == "etirps"){
		LETIRPS = true;
		certo = true;
		}
		else if (REFRIGERANTE == "LOG"){

		}
		else{
			certo = false;
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
}
    }

void PC_machine :: startmachine(){
	creditos = 0;
	LMEET = false;
    LETIRPS = false;
	while (LMEET || LETIRPS == false){
		cout << ">>Escolha o refrigerante: Meet ou Etirps" << endl << "ou escreva LOG para imprimir o relatorio\n";
		cin >> REFRIGERANTE;
		verificar_refri();
		verificar();
        creditos = creditos;
        troco = creditos - 150;
		if (RESET == true){
			reset();
		}
		else {
		verificar();
		};

	cout << "\nREFRIGERANTE ENTREGUE!!\n\n" << "Seu troco e: " << troco << "\n\nRESETANDO...\n\n";


	}
}
