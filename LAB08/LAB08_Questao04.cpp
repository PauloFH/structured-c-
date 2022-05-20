//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float a = 3.78575f * 8.129338f; // ESTOUROU A MANTISSA, QUE SÓ SUPORTA 6 DIGITOS
	float b = 3e30f + 2e15f;	//coube	
	float c = 20518.56f * 2.0f; //ESTOUROU A MANTISSA, QUE SÓ SUPORTA 6 DIGITOS
	float d = 3.14159f + 1.45f; //coube
	float e = 2.0f * 1e30f;		//coube
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout <<	d << endl;
	cout << e << endl;
}