#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	float soma = 0;
	int iteracao = 0;
	int num = 0;
	float media = 0;
	
	do {
		cout << "\nInsira um numero inferior a 100: ";
		cin >> num;
		soma += num;
		iteracao++;
	} while ( num <= 100 && soma < 500);
	
	media = soma/iteracao;
	
	cout << "A soma dos valores introduzidos e: " << soma << " e a sua media e: " << media;
}
