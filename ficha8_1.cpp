#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int i;
	do {
		cout << "Insira um numero entre 1 e 10: ";
		cin >> i;
	} while ( i >= 1 && i <= 10);
	
	cout << "\nO numero nao esta entre 1 e 10.";
	
}

