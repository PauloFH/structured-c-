//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double media(double a, double b);

double a, b, md;

int main() {
	system("chcp 1252 > nul");
	
	cout << "Digite um valor inteiro: ";
		cin >> a;
		cout << "Digite outro valor inteiro: ";
		cin >> b;
		md = media(a,b);
		cout << "A média dos números é " << md;
}
double media(double a, double b) {
	double media;
	media = (a + b)/2;
		return media;
}