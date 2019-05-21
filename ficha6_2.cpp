#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	int a = 0;
	int b = 0;
	int prod = 0;
	
	do {
		cout << "Digite um numero inteiro: ";
		cin >> a;
		cout << "Digite outro numero inteiro: ";
		cin >> b;
		
		prod = a*b;
		
		cout << a << " * " << b << " = " << prod << "\n";
	}	while (prod > 10 && prod < 1000);
}
