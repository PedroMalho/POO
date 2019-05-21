#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char frase1[200];
	char frase2[200];
	
	cout << "Introduza uma frase: \n";
	gets(frase1);
	
	cout << "Introduza a 2 frase: \n";
	gets(frase2);
	
	strcat(strcat(frase1, " "), frase2);
	
	cout << frase1;
}
