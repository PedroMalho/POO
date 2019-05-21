#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char word1[200];
	char word2[200];
	
	cout << "Insira a primeira palavra: \n";
	gets(word1);
	
	cout << "Insira a segunda palavra: \n";
	gets(word2);
	
	cout << "\n";
	
	if (strcmp(word1, word2)) {
		if (strlen(word1) > strlen(word2)) {
			cout << "A palavra maior e: " << word1;
		} else if (strlen(word1) == strlen(word2)){
			cout << "As palavras teem o mesmo comprimento";
		} else {
			cout << "A palavra maior e: " << word2;
		}
	} else {
		cout << "As palavras sao iguais.";
	}
	
}
