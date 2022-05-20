//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	int control{};
	system("chcp 1252 > nul");
	cout << "Quantos valores deseja guardar?";
	cin >> control;
	int* vet = new int[control];
	cout << "Quais os valores? ";
	for (int i = 0; i < control; i++) {
		cin >> vet[i];
	}
	cout << "Os valores ";
	for (int i = 0; i < control; i++) {
		cout << vet[i] << ", ";
	}
	cout << " foram armazenados.";
}