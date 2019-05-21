#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

main()
{
	int segundos;
	
	cout << "Insira os segundos: ";
	cin >> segundos;
	
	float dias = segundos / 86400.00;
	float horas = dias - floor(dias);
	float minutos = horas * 60.00;
	float segundo = minutos * 60.00;
	
	
	cout << "dias: " << floor(dias) << " | horas: " << horas << " | mins: " << minutos << " | segs: " << segundo;
}

