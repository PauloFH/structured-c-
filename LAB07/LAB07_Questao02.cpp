//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
char codificar(char a);
char decodificar(char a);
char cdf, dcdf, bs;
int cd;
bool rsp;
int main(char a) {
	system("chcp 1252 > nul");
	cout << "Digite uma letra :";
	cin >> bs;
	cout << "Deseja codificar  ou decodificar essa letra?\n (digite 1 para codificar e 0 para decodificar):";
	cin >> rsp;

	if (rsp == true) {
		cdf = codificar(bs);
		cout << "\nCodificando caractere...";

		cout << "\nO número digitado ao ser codificado fica: " << cdf << endl;
	}
	else {
		dcdf = decodificar(cdf);
		cout << "\n Decodificando o caractere...\n";
		cout << "O caractere após a decodificação fica : " << dcdf;
	}
}

char codificar(char a) {
	a = a + 3;
	return a;
}
char decodificar(char a) {
	a = a - 3;
	return a;
}