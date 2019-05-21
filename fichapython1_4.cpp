#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int dist;
	int minutos;
	
	cout << "Indique a distancia percorrida, km: ";
	cin >> dist;
	cout << "Indique o tempo, em minutos: ";
	cin >> minutos;
	
	float horas = minutos / 60;
	float metros = dist * 1000;
	float seg = minutos * 60;
	
	float kmh = dist / horas;
	float ms = metros / seg;
	
	cout << "A sua velocidade media foi: " << kmh << " Km/h ou " << ms << " m/s.";
}
