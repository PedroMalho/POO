#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float raio, alt;

void obter_valores()
{	
	cout << "Insira o valor do raio do cilindro: ";
	cin >> raio;
	cout << "Insira o valor da altura do cilindro: ";
	cin >> alt;	
}

float volume (double i, double j) 
{
	return ((3.1416)*(i*i)*j);	
	
}

main()
{
	obter_valores();
	if (raio <= 0 && alt <= 0) {
		cout << "Os valores do raio e altura nao podem ser 0 ou negativos.";
	} else if (raio <= 0) {
		cout << "O valor do raio nao pode ser 0.\n";
	} else if (alt <= 0) {
		cout << "O valor da altura nao pode ser 0.\n";
	} else {
		cout << "O volume do cilindro e: " << setprecision(2) << fixed <<  volume(raio, alt) << "\n";
	}
}
