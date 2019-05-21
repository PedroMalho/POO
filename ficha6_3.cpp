#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char pass [10];
	cout << "Digite a senha: ";
	gets (pass);
	
	if (strcmp(pass, "bases")) {
		cout << "\nIncorrecto!\n";
		cout << "PISTA:  a senha tem 5 letras e comeca por b!\n";
	} else {
		cout << "\nCorrecto! Parabens! PogChamp! \n";
	}	
}
