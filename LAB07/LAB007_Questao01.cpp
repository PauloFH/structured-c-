//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
char codificar(char a);
char decodificar(char a);
char cdf, dcdf;
int cd;
int main(char a) {
	system("chcp 1252 > nul");
	cout << "Digite o caractere que ser� codificado: ";
	cin >> cd;
	cdf = cd;
	cdf = codificar(cdf);
	cout << "\nCodificando caractere...";
	
	cout << "\nO n�mero digitado ao ser codificado fica: " << cdf << endl;
	dcdf = decodificar(cdf);
	cout << "\n Decodificando o caractere...\n";
	cout << "O caractere ap�s a decodifica��o fica : " <<dcdf;

}

char codificar(char a) {
	a = a + 3;
	return a;
}
char decodificar(char a) {
	a = a - 3;
	return a;
}