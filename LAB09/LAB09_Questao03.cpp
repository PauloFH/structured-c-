//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
int main() {
	int inteiro;
	double real;
	system("chcp 1252 > nul");
	cout << "Digite um número real: ";
	cin >> real;
	inteiro = real;
	real = real - inteiro;
	cout << "A parte inteira: " <<inteiro << endl;
	cout << "A parte fracionária: " << real;
}