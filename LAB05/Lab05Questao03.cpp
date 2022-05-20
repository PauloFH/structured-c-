//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

double imc(double a, double b);
double IMC, at, ps;

int main() {
	system("chcp 1252 > nul");
	cout << "Índice de Massa Corporal (IMC) \n";
	cout << "------------------------\n";
	cout << "Altura: ";
	cin >> at;
	cout << "Massa: ";
	cin >> ps;
	imc(at, ps);
	cout << "IMC: " << IMC;
}

double imc(double a, double b) {

	IMC = ps/(at*at);
	return IMC;
}

