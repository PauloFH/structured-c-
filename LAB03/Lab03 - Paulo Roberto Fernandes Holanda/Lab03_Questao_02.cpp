//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");

	int n, t;

	cout << "Tabuada de n \n";
	cout << "------------";
	cout << "Entre com um n�mero n(0 a 9) : ";
	cin >> n;
	while (n < 0 || n > 9) {
		cout << "Escolha um n�mero v�lido! ";
		cin >> n;
	}
	for (int i = 0; i <= 9; i++) {
		t = n * i;
		cout << n << " X " << i << " = " << t << endl;
		
	}
	system("pause");
}
