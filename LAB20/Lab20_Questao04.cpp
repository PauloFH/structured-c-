//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	int vl1{}, vl2{}, sm{};
	system("chcp 1252 > nul");
	cout << "Digite um n�mero inteiro: ";
	cin >> vl1;
	cout << "Digite outro n�mero inteiro:";
	cin >> vl2;
	if (vl1 > vl2) {
		for (int i = (vl2+1); i < vl1; i++) {
			sm += i;
		}
		cout << "A soma de todos os valores entre " << vl2 << " e " << vl1 << ": " << sm << ".";
	}
	else if(vl1< vl2) {
		for (int i = (vl1 + 1); i < vl2; i++) {
			sm += i;
		}

		cout << "A soma de todos os valores entre " << vl1 << " e " << vl2 << ": " << sm << ".";
	}
	else if (vl1 == vl2) {
		cout << "A soma de todos os valores entre " << vl1 << " e " << vl2 << " � zero porque n�o h� numeros naturais entre eles. ";
	}
}