//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double baskara(double a, double b, double c);
int main() {
	double a, b, c;
	system("chcp 1252 > nul");
	cout << "Encontre as raizes da fun��o!!"<< endl;
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	baskara(a,b,c);

}
double baskara(double a, double b, double c) {
	double Delta;
	double x2;
	double x1;
	Delta = (pow(b, 2) - (4 * a * c));
	if (Delta < 0) {         //SE O DELTA FOR = 0, ENT�O N�O H� RAIZ REAL. LOGO, N�O SER� FEITO O CALCULO
		cout << "A fun��o n�o tem Raiz Real";
	}
	else {
		if (Delta == 0) {   // SE O DELTA FOR ZERO, VAI CALCULAR S� UMA RAIZ, J� QUE S�O IGUAIS
			x1 = ((b * -1) + (sqrt(Delta))) / (2 * a);
			if (x1 >= x2) {
				cout << "A fun��o s� tem uma Raiz Real. \n X: " << x1;
			}
		}	
		else {
				if(Delta > 0) { // Caso o delta seja positivo, ser� tirada as duas razes
					x2 = ((b * -1) - (sqrt(Delta))) / (2 * a);
					x1 = ((b * -1) + (sqrt(Delta))) / (2 * a);
					cout << "A fun��o tem duas raizes reais \n X�: " << x1;
					cout << "\n X�: " << x2;
				}
			}

		}
		return 0;
}