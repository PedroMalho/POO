#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int i;
	cout << "Introduza um numero entre 0 e 3: ";
	cin >> i;
	
	switch(i) {
		case 0: cout << i << " = zero.";
			break;
		case 1: cout << i << " = um.";
			break;
		case 2: cout << i << " = dois.";
			break;
		case 3: cout << i << " = tres.";
			break;
		default: cout << "Numero invalido.";
	}
}
