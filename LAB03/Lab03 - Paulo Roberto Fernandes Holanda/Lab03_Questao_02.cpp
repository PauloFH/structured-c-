//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");

	int n, t;

	cout << "Tabuada de n \n";
	cout << "------------";
	cout << "Entre com um número n(0 a 9) : ";
	cin >> n;
	while (n < 0 || n > 9) {
		cout << "Escolha um número válido! ";
		cin >> n;
	}
	for (int i = 0; i <= 9; i++) {
		t = n * i;
		cout << n << " X " << i << " = " << t << endl;
		
	}
	system("pause");
}
