#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	int num = 0;
	int i = 1;
	
	cout << "Insira um numero: ";
	cin >> num;
	if ( num != 0) {
		for (i = 1; i <= num; i++) {
			if (i % 2 == 0) {
				cout << i << "\n";
			}
		}
	} else if (num == 0){
		cout << "Numero inserido foi 0, nao e possivel realizar a operacao.";
	} else if (num == 1) {
		cout << "Nao existem pares antes do 1.";
	}
}
