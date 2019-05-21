#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

main()
{
	int v[5];
	int i;
	srand((unsigned) time(NULL));
	for (i = 0; i < 5; i++) {
		v[i] = rand() % 30;
	}
	
	for (i = 0; i < 5; i++) {
		cout << "[" << v[i] << "]";
	}
}
