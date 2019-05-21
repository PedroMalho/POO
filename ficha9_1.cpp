#include <iostream>

using namespace std;

int x, y;

void obter_valores()
{
	cout << "Insira o valor de x: ";
	cin >> x;
	cout << "Insira o valor de y: ";
	cin >> y;
}

int divisao(int i, int j)
{
	return (i / j);
}


int rest(int i, int j)
{
	return (i % j);	
}

main()
{
	obter_valores();
	if ( y == 0) {
		cout << "Nao se pode dividir por 0.\n";
	} else {
		cout << "Resultado da divisao: " << divisao(x, y) << "\n";
		cout << "Resto da divisao: " << rest(x,y) << "\n";
	}	
}


 
