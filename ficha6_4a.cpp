#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	int i = 0;
	char vetor[5];

	cout << "Vetor com 5 elementos\n";
	
	for (i = 0; i < 5; i++) {
		cout << "Indique um valor para o vetor v[" << i <<"]: ";
		cin >> vetor[i];
	}
	
	for (i = 4; i >= 0; i--){
		cout << "\n[" << i << "]= " << vetor[i];
	}
}

