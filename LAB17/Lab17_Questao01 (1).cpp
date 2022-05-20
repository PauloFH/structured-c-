//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vet_1[5]{}, vet_2[5]{}, sm[5]{};
	cout << "Digite 10 valores: ";

	for (int i = 0; i < 5; i++) {
		cin >> vet_1[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> vet_2[i];
	}
	for (int i = 0; i < 5; i++) {
		sm[i] = vet_1[i] + vet_2[i];
	}
	cout << "Vetor A: ";
	for (int i = 0; i < 5; i++) {
		cout << vet_1[i] << " ";
	}
	cout << "\nVetor B: ";
	for (int i = 0; i < 5; i++) {
		cout << vet_2[i] << " ";
	}
	cout << "\nVetor S: ";
	for (int i = 0; i < 5; i++) {
		cout << sm[i] << " ";
	}
}