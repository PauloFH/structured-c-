//Paulo Roberto Fernandes Holanda
#include <cmath>
#include <iostream>
using namespace std;

double quadrado(double a);
double cubo(double a);

double x, qd, cb, qc;
int main() {
	system("chcp 1252 > nul");
	cout << "Digite um valor: ";
	cin >> x;
		qd = quadrado(x);
		cout << "Quadrado = " << qd << endl;
		cb = cubo(x);
		cout << "Cubo = " << cb << endl;
	qc = cubo(quadrado(x));
	cout << " Cubo do quadrado = " << qc << endl;
}

double quadrado(double a) {
	double q;
	q = pow(a, 2);
	return q;
}
double cubo(double a) {
	double q;
	q = pow(a, 3);
	return q;
}