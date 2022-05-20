//Paulo Roberto Fernandes Holanda
#include <cmath>
#include <iostream>
using namespace std;

double vet(int x,int y);
double v;
int x, y;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor: \n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	vet(x, y);
	cout << "O tamanho do vetor é " << v;
}
double vet(int x, int y) {
	double a, b;
	a = pow(x, 2);
	b = pow(y, 2);
	v = sqrt(a + b);

	return v;
}