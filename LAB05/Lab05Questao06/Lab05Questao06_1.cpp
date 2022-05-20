//Paulo Roberto Fernandes Holanda
#include <iostream>
#include "Lab05Questao06_.h"
using namespace std;
int x, y;
double v, vv;
int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor:\n";
	cout << "x :";
	cin >> x;
	cout << "y: ";
	cin >> y;
	v = vet(y, x);
	vv = tt(y, x);
	cout << "Coordenadas polares do vetor:\n (";
	cout << v << "  ,  " << vv << ")";

}
