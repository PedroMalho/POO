#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int produto;
	cout << "         Produtos da semana dos descontos";
	cout << "\n        1 - Cereais Nestum,  2 - Sumo Tropical";
	cout << "\n        3 - Geleia Morango,  4 - Massa Italiana";
	cout << "\n        5 - Arroz Amarelo,   6 - Leite de soja";
	cout << "\n        7 - Coca cola Zero,  8 - Couve de Bruxelas";
	cout << "\n\nIndique o numero do produto: ";
	cin >> produto;
	
	switch(produto){
		case 1: cout << "Desconto = 20%";
		break;
		case 2: cout << "Desconto = 15%";
		break;
		case 3: cout << "Desconto = 20%";
		break;
		case 4: cout << "Desconto = 10%";
		break;
		case 5: cout << "Desconto = 10%";
		break;
		case 6: cout << "Desconto = 20%";
		break;
		case 7: cout << "Desconto = 15%";
		break;
		case 8: cout << "Desconto = 5%";
		break;
		default: cout << "Produto Invalido";
		break;
	}
}
