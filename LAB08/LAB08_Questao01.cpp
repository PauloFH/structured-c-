//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double baskara(double a, double b, double c);
int main() {
	double a, b, c;
	system("chcp 1252 > nul");
	cout << "Encontre as raizes da função!!"<< endl;
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
	if (Delta < 0) {         //SE O DELTA FOR = 0, ENTÃO NÃO HÁ RAIZ REAL. LOGO, NÃO SERÁ FEITO O CALCULO
		cout << "A função não tem Raiz Real";
	}
	else {
		if (Delta == 0) {   // SE O DELTA FOR ZERO, VAI CALCULAR SÓ UMA RAIZ, JÁ QUE SÃO IGUAIS
			x1 = ((b * -1) + (sqrt(Delta))) / (2 * a);
			if (x1 >= x2) {
				cout << "A função só tem uma Raiz Real. \n X: " << x1;
			}
		}	
		else {
				if(Delta > 0) { // Caso o delta seja positivo, será tirada as duas razes
					x2 = ((b * -1) - (sqrt(Delta))) / (2 * a);
					x1 = ((b * -1) + (sqrt(Delta))) / (2 * a);
					cout << "A função tem duas raizes reais \n X¹: " << x1;
					cout << "\n X²: " << x2;
				}
			}

		}
		return 0;
}