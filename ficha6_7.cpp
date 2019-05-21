#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	int input = 0;
	
	cout << "Menu de opcoes:";
	cout << "\n1 - Executar o programa Calculadora";
	cout << "\n2 - Converter graus centigrados/fahrenheit";
	cout << "\n3 - Converter metros/quilometros";
	cout << "\n4 - Sair";
	cout << "\nIntroduza a opcao que pretende utilizar: ";
	cin >> input;
	
	switch(input){
		case 1: cout << "Calculadora: a executar...";
				break;
		case 2: cout << "Conversao de temperaturas";
				break;
		case 3: cout << "Conversao de distancias";
				break;
		case 4: cout << "A terminar o programa...";
				break;
		default: cout << "Opcao invalida";
				break; 
		
	}
}
