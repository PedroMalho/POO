#include <iostream>
#include <stdio.h>

using namespace std;

main(){
	
	int num1;
	int num2;
	char op;
	
	cout << "Insira o primeiro numero: ";
	cin >> num1;
	cout << "Insira o segundo numero: ";
	cin >> num2;
	
	cout << "Insira a operacao a realizar(+, -, * ou /): ";
	cin >> op;
	
	switch (op){
		case '+': cout << num1 << op << num2 << " = " << num1+num2;
		break;
		case '-': cout << num1 << op << num2 << " = " << num1-num2;
		break;
		case '*': cout << num1 << op << num2 << " = " << num1*num2;
		break;
		case '/': cout << num1 << op << num2 << " = " << num1/num2;
		break;
		default: cout << "Invalido";
	}
}
