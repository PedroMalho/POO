#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int x;
	int y;
	
	cout << "Vou pedir-lhe dois numeros.\n";
	cout << "Escreva o primeiro numero, x= ";
	cin >> x;
	cout << "Escreva o segundo numero, y= ";
	cin >> y;
	
	int res = (x + 3 * y) * (x - y);
	
	cout << "O valor de (" << x << " + 3 * " << y << ") * (" << x << " - " << y << ") e: " << res;
}
