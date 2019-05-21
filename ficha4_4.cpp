#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

main()
{
	int c1;
	int c2;
	cout << "Digite o valor do primeiro cateto: ";
	cin >> c1;
	cout << "\nDigite o valor do segundo cateto: ";
	cin >> c2;
	
	float h;
	h = pow(c1, 2) + pow(c2, 2);
	
	cout << "\nO valor da hipotenusa: " << sqrt(h);
}

