#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int i,x,z;
	
	cout << "Insira 3 numeros para verificar qual o maior.";
	cout << "\nPrimeiro numero: ";
	cin >> i;
	cout << "Segundo numero: ";
	cin >> x;
	cout << "Terceiro numero: ";
	cin >> z;
	
	if ( i == x && i == z) {
		cout << "Os 3 numeros sao iguais.";
	} else if ( i > x && i > z) {
		cout << i << " e o maior numero.";
	} else if ( x > z) {
		cout << x << " e o maior numero.";
	} else {
		cout << z << " e o maior numero.";
	}
}
