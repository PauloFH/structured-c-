//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


void ExibirBits(unsigned char x);
int i;
unsigned char base = 0;
int main() {

	system("chcp 1252 > nul");
	cout << "Digite um valor entre 0 e 255: ";
	cin >> i;
	base = i;
	cout << "O número " << base << " em binário é ";
	ExibirBits(base);
}

void ExibirBits(unsigned char x) {
	for (int i = 7; i >= 0; i--) {
		unsigned char mascara = 1 << i;
		unsigned char estado = x;
		if (estado & mascara)
			cout << "1";
		else
			cout << "0";
	}
}