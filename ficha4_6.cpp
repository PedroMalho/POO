#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int a;
	int b;
	
	cout << "Insira o valor de a: ";
	cin >> a;
	cout << "\nInsira o valor de b: ";
	cin >> b;
	
//	if ( a == b) {
//		cout << b << " e igual a " << a;
//	} else if (a < b){
//		cout << b << " e maior que " << a;
//	} else {
//		cout << a << " e maior que " << b;
//	}

	(a>b)? (cout << a << " e maior que " << b << "\n"): ((cout << b << " e maior que " << a << "\n"));
}
