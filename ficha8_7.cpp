#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int i, x, aux;
	
	cout << "Introduza 2 numeros.\n";
	cout << "Primeiro numero: ";
	cin >> i;
	cout << "Segundo numero: ";
	cin >> x;

// primeira solucao	
//	if ( i == x) {
//		cout << "Os numeros sao iguais.";
//	} else if ( i < x) {
//		for (; i <= x; i++) {
//			cout << i << "\n";
//		}
//	} else {
//		for (; i >= x; i--) {
//			cout << i << "\n";
//		}
//	}


// segunda solucao so com 1 for
	if ( i == x ) {
		cout << "Os numero sao iguais." << endl;
		return(0);
	} else if ( i > x) {
		aux = i;
		i = x;
		x = aux;	
	} 

	for (; i <= x; i++ ) {
		cout << i << "\n";
	}
}
