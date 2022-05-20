//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int Som(int a, int b);
int main() {
	int on = 0, off = 0, sm = 0;
	system("chcp 1252 > nul");
	cout << "Entre com o valor: \n (Entrada) ";
	cin >> on; 
	cout << " Entre com o segundo valor:(Saida) ";
	cin >> off;
	sm = Som(on, off);
	cout << "Somda das entradas é: " << sm;
}

int Som(int a, int b){
	int out = 0;

	if (a < b) {
		for (int i = a; i <= b; i++) {
			out += i;
		}
	}
	else {
		for (int i = a; i >= b; i--) {
			out += i;
		}
	}

	return out;
}
