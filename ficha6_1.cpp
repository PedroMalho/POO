#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	int num = 0;
	int soma = 0;
	
	do {
		cout << "Insira um numero entre 1 e 15: ";
		cin >> num;
	} while (num < 1 || num > 15);
	
	while (num <= 15) {
		cout << "n = " << num << "\n";
		num++;
		soma += num;
	}
	
	cout << "A soma dos valores e: " << soma;
}
