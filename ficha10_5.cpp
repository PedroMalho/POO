#include <iostream>
#include <string.h>

using namespace std;

void frutas( char *fruta1, char *fruta2);
char frutaEscolhida[100];

main()
{
	char fruta1[20];
	char fruta2[20];
	
	frutas(fruta1, fruta2);

	strcat ( frutaEscolhida, fruta1);
	strcat ( frutaEscolhida, " ");
	strcat ( frutaEscolhida, fruta2);
	
	cout << frutaEscolhida;
}

void frutas( char *fruta1, char *fruta2) 
{
	cout << "Insira o nome de uma fruta: \n";
	cin >> fruta1;
	
	cout << "Insira de outra fruta: \n";
	cin >> fruta2;
}
