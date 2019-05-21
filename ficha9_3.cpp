#include <iostream>

using namespace std;

main()
{
	int i;
	
	cout << "Insira um numero entre 1 e 5: ";
	cin >> i;
	
	while (i < 1 || i > 5) {
		cout << "Numero nao aceite!\n";
		cout << "Insira novamente um numero entre 1 e 5: ";
		cin >> i;
	}
	
	if ( i >= 1 && i <= 5) {
		cout << i << "\n";
	}
}
