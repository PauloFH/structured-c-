//Paulo Roberto Fernandes Holanda
#include <cmath>
#include <iostream>
using namespace std;
double tt(double y, double x);
double y, x, vv;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor: \n";
	cout << "x: ";
		cin >> x;
	cout << "y: ";
		cin >> y;
		tt(y, x);
	cout << "O ângulo do vetor é" << vv << " graus";
	

}

double tt(double y, double x) {
	#define PI 3.14159265
	vv = atan2(y, x)* (180 / PI);
	return vv;
}