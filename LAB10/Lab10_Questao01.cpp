//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
system("chcp 1252 > nul");

	int vector[5], control;
	cout << "Vetor: ";
	cin >> vector[0] >> vector[1] >> vector[2] >> vector[3] >> vector[4];
	cout << "---------------------" << endl;
	cout << "Alterar posição: ";
	cin >> control;
	const int temp = control;
	cout << "Novo valor: ";
	cin >> vector[control];
	cout << "---------------------" << endl;
	cout << "Vetor: ";
	for (int i = 0; i < 5; i++) {
		cout << vector[i] << " ";
	}
}