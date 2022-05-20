//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	int vl1{}, vl2{}, sm{};
	system("chcp 1252 > nul");
	cout << "Digite um número inteiro: ";
	cin >> vl1;
	cout << "Digite outro número inteiro:";
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
		cout << "A soma de todos os valores entre " << vl1 << " e " << vl2 << " é zero porque não há numeros naturais entre eles. ";
	}
}