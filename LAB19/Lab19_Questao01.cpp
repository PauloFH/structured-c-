//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vet[4][4]{ 3, 1, 5, 5, 1, 5, 5, 6, 2, 3, 4, 5, 4, 9, 1, 8 };
	int soma[4]{};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4;j++) {
			soma[i] += vet[j][i];

		}
	}
	cout << "A soma das colunas é:";
	for (int i = 0; i < 4; i++) {
		cout << " " << soma[i];
	}

}