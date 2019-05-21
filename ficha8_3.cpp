#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char i;
	
	cout << "Insira uma letra maiuscula ou minuscula: ";
	cin >> i;
	
	if (islower(i)) {
		cout << i << " minusculo.";
	} else {
		cout << i << " maiusculo.";
	}
}
