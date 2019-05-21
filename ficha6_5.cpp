#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char str;
	cout << "Digite uma letra, numero ou simbolo: ";
	cin >> str;
	
	if (isprint(str) >= 1 && isprint(str) <= 2) {
		cout << "Letra";
	} else if (isprint(str) >= 3 && isprint(str) <= 4) {
		cout << "Numero";
	} else if (isprint(str) >= 5) {
		cout << "Simbolo";
	}
	
	cout << "\n" << isprint(str);
}
