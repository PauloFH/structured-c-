//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	double metros_totais, metros, recebimento;
	int kilometros;
	system("chcp 1252 > nul");
	cout << "Entre com a distância em metros: ";
	cin >> recebimento;
	metros_totais = recebimento / 1000;
	kilometros = metros_totais;
	metros = metros_totais - kilometros;
	metros = metros * 1000;
	cout << recebimento << " metros equivalem a " << kilometros << " quilômetros e " << metros << " metros.";
}