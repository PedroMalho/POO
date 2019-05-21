#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	
	float preco = 0;
	int quant = 0;
	float desconto =0;
	float final = 0;
	
	cout << "Introduza a quantidade de 'produto' que pretende comprar(500 = 5% de desconto e 1000 = 8% de desconto): ";
	cin >> quant;
	cout << "Insira o preco que deseja pagar por unidade: ";
	cin >> preco;
	
	if (quant > 1000) {
		desconto = (quant * preco) * 0.08;
		final = (quant * preco) - desconto;
		cout << "O valor a pagar pelas " << quant << " unidades, por " << preco << " cada uma, resulta num total de " << final << " com 8% de desconto.";
	} else if ( quant >= 500) {
		desconto = (quant * preco) * 0.05;
		final = (quant * preco) - desconto;
		cout << "O valor a pagar pelas " << quant << " unidades, por " << preco << " cada uma, resulta num total de " << final << " com 5% de desconto.";
	} else {
		final = (quant * preco) - desconto;
		cout << "O valor a pagar pelas " << quant << " unidades, por " << preco << " cada uma, resulta num total de " << final;
	}
}
