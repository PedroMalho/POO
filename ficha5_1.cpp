#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int num;
	int soma;
	
	cout << "Insira um numero entre 1 e 15: ";
	cin >> num;
	
	if (num >= 1 && num <= 15) {
		do {
			cout << num << "\n";
			soma += num;
			num++;			
		} while (num >= 1 && num <= 15 );
	} else {
		cout << "Numero invalido.";
	}
	cout << "A soma dos numeros e: " << soma;	
}

