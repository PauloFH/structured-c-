//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	float cf, ct,cj, cim;

	cout << "Custo de f�brica: ";
	cin >> cf;
		cim = cf * 0.28;
		cj = cf * 0.45;
		ct = cf + cim + cj;
		cout << "O custo ao consumidor � de R$" << ct << endl;
	system("pause");
}