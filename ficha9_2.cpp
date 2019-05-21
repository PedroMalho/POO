#include <iostream>
#include <string.h>

using namespace std;

// (sizeof(vetor)/sizeof(*vetor))

main()
{
	char vetor[] = "Boa sorte";
	
	for (int i = 0; i < 9; i++) 
		cout << "\nt[" << i << "] = '" << vetor[i] << "'";
}


