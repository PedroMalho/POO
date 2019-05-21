#include <iostream>

using namespace std;

main()
{
	int notas[6] = {1, 3, 5, 7, 19, 20};
	int *p=notas;
	
//	cout << &notas[1] << "\n";
	
	cout << "PROGRAMA PARA DAR UMA AJUDINHA NAS NOTAS!\n";
	
	for (int i=0; i <=5; i++) {
		*p = *p + 1;
		if ( *p >= 20) {
			*p = 20;
		}
		cout << *p++ << endl;
	}
}
