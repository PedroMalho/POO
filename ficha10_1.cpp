#include <iostream>

using namespace std;

main()
{
	char t[100];
	char *p=t;
	cout << "PROGRAMA QUE PERMITE VISUALIZAR PALAVRAS INVERSAS!\n";
	cout << "Insira uma palavra: ";
	cin >> t;
	if (*p == '\0') {
		cout << "\0";
	}
	cout << "\n";
	
	//imprimir palavra	
	while (*p != '\0')
	{
		cout << *p++;
	}
	
	//imprimir palavra inversa
	*p--;
	cout << " -- ";
	while (*p) {
		cout << *p--;
	}
	cout << *p-- << "\n";	
}
