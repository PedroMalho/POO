#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int i, x;
	
	cout << "Introduza um numero: ";
	cin >> i;
	
	x = i;
	
	while (i >= 0) {
		cout << i  << "\n";
		i--;
	}
	
	i = 0;
	
	cout << "------------------\n";
	
	while (i <= x) {
		cout << i << "\n";
		i++;
	}
}
