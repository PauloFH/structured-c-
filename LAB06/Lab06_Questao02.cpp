//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <iomanip>
using namespace std;


double preco_total, pastel, pao;

int main() {
#define preco_por_unidade_Pao 0.300
#define preco_por_unidade_Pastel 0.250
	system("chcp 1252 > nul");
	cout << "P�es&Cia\n" << endl;
	cout << "Quantos p�es? ";
	cin >> pao;
	cout << "Quantos past�is? ";
	cin >> pastel;
	preco_total = (pao * preco_por_unidade_Pao) + (pastel * preco_por_unidade_Pastel);
	cout << "O total das compras � R$" << fixed << setprecision(2) << preco_total;
}