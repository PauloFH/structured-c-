//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {

	char tabela[16][16]{}, pt{};
	int countl{}, col1{}, lin1{},col2{}, lin2{};
	for (int i{}; i < 16; i++) {
		for (int j{}; j < 16; j++) {
			tabela[i][j] = countl++;
		}
	}
	cout << "Entre com as coordenadas da região de interesse: \n De: ";
	cin >> pt >> col1 >> pt >> lin1 >> pt;
	cout << "Até: ";
	cin >> pt >> col2 >> pt >> lin2 >> pt;

	for (int i{col1}; i <= col2; i++) {
		for (int j{lin1};	j <= lin2; j++) {

			cout << tabela[j][i] << " ";

		}
		cout << endl;
	}

}