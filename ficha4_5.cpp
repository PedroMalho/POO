#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

main()
{
	int n1;
	int n2;
	
	cout << "Escreva a primeira nota: ";
	cin >> n1;
	cout << "\nEscreva a segunda nota: ";
	cin >> n2;
	
	float med;
	med = (n1 + n2) / 2.0;
	if ( med < 10) {
		cout << "\nReprovado. Com media de: " << med;
	} else {
		cout << "\nAprovado. Com media de: " << med;
	}
}
