#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

main()
{
	char a[] = "Grande clube o Porto, ";
	char b[] = "mas o Benfica e melhor.";
	
	cout << a;
	
	strcat(a, b);
	
	cout << "\n" << a << "\n";
	
}
