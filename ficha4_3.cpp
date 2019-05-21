#include <iostream>
#include <stdio.h>
using namespace std;

main()
{
	cout << "Dobro dos valores entre 1 e 5 utilizando while \n";
	int i = 1;
	while ( i <= 5) {
		cout << i*2 << "\n";
		i++;
	}
	system("PAUSE");
	
	cout << "\nDobro dos valores entre 1 e 5 utilizando for \n";
	for (int j = 1; j <= 5; j++) {
		cout << j*2 << "\n";
	}
	system("PAUSE");
	
	cout << "\nDobro dos valores entr 1 e 5 utilizando switch \n";
	int nota;
	cout << "\n\nDigite a sua nota: ";
	cin >> nota;
	
	switch (nota){
		case 0: cout << "Reprovado! \n";
		break;
		case 1: cout << "Reprovado! \n";
		break;
		case 2: cout << "Reprovado! \n";
		break;
		case 3: cout << "Reprovado! \n";
		break;
		case 4: cout << "Reprovado! \n";
		break;
		case 5: cout << "Reprovado! \n";
		break;
		case 6: cout << "Reprovado! \n";
		break;
		case 7: cout << "Reprovado! \n";
		break;
		case 8: cout << "Reprovado! \n";
		break;
		case 9: cout << "Reprovado! \n";
		break;
		case 10: cout << "Suficiente \n";
		break;
		case 11: cout << "Suficiente \n";
		break;
		case 12: cout << "Suficiente \n";
		break;
		case 13: cout << "Suficiente \n";
		break;
		case 14: cout << "Bom \n";
		break;
		case 15: cout << "Bom \n";
		break;
		case 16: cout << "Bom \n";
		break;
		case 17: cout << "Bom \n";
		break;
		case 18: cout << "Muito Bom! \n";
		break;
		case 19: cout << "Muito Bom! \n";
		break;
		case 20: cout << "Muito Bom! \n";
		break;
	}
	system("PAUSE");
}
