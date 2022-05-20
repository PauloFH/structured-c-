//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;
int ab, c;
int Absoluto(int x);
int main() {
	system("chcp 1252 > nul");

	cout << "Digite um número inteiro: ";
	cin >> c;

	ab = Absoluto(c);
	cout << "O valor absoluto é " << ab << ".";
}
int Absoluto(int x) {
	int x1, x2;
	x1 = pow(x, 2);
	x2 = sqrt(x1);
	return x2;
}