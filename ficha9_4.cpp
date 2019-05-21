#include <iostream>

using namespace std;

main()
{
	int i;
	
	do {
		cout << "\nHipotese de compra de senhas:\n";
		cout << "(1) Pequeno Almoco\n";
		cout << "(2) Almoco\n";
		cout << "(3) Lanche\n";
		cout << "(4) Jantar\n";
		
		cout << "Escolha a senha que deseja comprar: ";
		cin >> i;
		switch (i) {
			case 1: cout << "Comprou uma senha para o pequeno almoco.\n";
				break;
			case 2: cout << "Comprou uma senha para o almoco.\n";
				break;
			case 3: cout << "Comprou uma senha para o lanche.\n";
				break;
			case 4: cout << "Comprou uma senha para o jantar.\n";
				break;
			default: cout << "Selecao invalida. Insira uma opcao valida.";
		}
		
	} while (i < 1 && i > 4);
}
