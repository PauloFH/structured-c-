//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double VolumeCilindro(double r,double h);

double r, h,v;
int main() {
	system("chcp 1252 > nul");
	cout << "Calcula o Volume de um Cilindro\n";
	cout << "-------------------------------\n";
	cout << "Entre com o raio da base: ";
	cin >> r;
	cout << "Entre com a altura: ";
	cin >> h;
	v = VolumeCilindro(r,h);
	cout << "O volume do cilindro é " << v;
	cout << "\n";
}

double VolumeCilindro(double r, double h) {
	double vol;
	vol = (3.14159*((r*r)*h));
	cout.precision(7);
	return vol;
}