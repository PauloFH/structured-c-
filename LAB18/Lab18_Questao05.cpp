//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int id{}, crl{}, mr{}, mn{};
	cout << "Digite as idades do grupo: ";
	do {
		cin >> id;

		if (id >= 18) {
			crl += 1;
		}
		if (id > mr)
			mr = id;
		if (id < mn)
			mn = id;
	}
		while (id != 0);
	cout << "Nesse grupo" << crl << "pessoas são maiores de idade.";
	cout << "O mais velho tem " << mr << "anos, e o mais novo " << mn <<" anos."
}