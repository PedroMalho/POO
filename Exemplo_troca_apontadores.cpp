#include <iostream>

using namespace std;

void troca(int x, int y); //prototipo

main()
{
	int n1=1, n2=3;
	troca(n1,n2);
	cout << "n1 = " << n1 << "\n";
	cout << "n2 = " << n2 << "\n";
}

void troca (int x, int y)
{
	int aux;
	aux = x; x= y; y = aux;
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
}
