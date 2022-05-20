//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
unsigned Bitsbaixos(unsigned x);

unsigned base;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um valor inteiro: ";
	cin >> base;
	base = Bitsbaixos(base);
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << base;
}
unsigned Bitsbaixos(unsigned x) {
	unsigned mascara = 983040;
	x = x & (~mascara);
	return x;
}