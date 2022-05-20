//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
unsigned BitsAltos(unsigned x);

unsigned base;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um valor inteiro: ";
	cin >> base;
	base = BitsAltos(base);
	cout << "Os 16 bits mais altos desse valor correspondem ao número " << base;
}
unsigned BitsAltos(unsigned x) {
	unsigned mascara = 983040;
	x = x & mascara;
	x = x >> 16;
	return x;
}