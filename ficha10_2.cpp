#include <iostream>

using namespace std;

main()
{
	int notas[6];
	int i;
	cout << "PROGRAMA PARA DAR UMA AJUDINHA NAS NOTAS!\n";
	
	for (; i <= 5; i++) {
		cout << "INSIRA AS NOTAS (" << i << "/5): ";
		cin >> notas[i];
		if (notas[i] < 0 || notas[i] > 20) {
			cout << "Nota invalida \n";
			i--;
		}
	}
		
	for (i = 0; i <= 5; i++) {
		notas[i] = notas[i] + 1;
		if (notas[i] >= 20) {
			notas[i] = 20;
		}
		cout << notas[i] << endl;
	}

}
