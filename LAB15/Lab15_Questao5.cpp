//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct ASCII {
	char ch{};
	unsigned nm{ (unsigned)ch };
};
ASCII* rnt(char a, int b);

int main() {
	char ch;
	int nm;
	system("chcp 1252 > nul");

	cout << "Digite um caractere ASCII";
	cin >> ch;
	nm = (int)ch;
	ASCII* diASCII = new ASCII;
	diASCII = rnt(ch, nm);
	cout << "O caractere " << diASCII->ch << " em numero " << diASCII->nm;
	cout << " está armazenado em " <<diASCII;
		delete diASCII;
}

ASCII* rnt(char a, int b){
	ASCII* tmp = new ASCII{};
	tmp->ch = a;
	tmp->nm = b;
	cout << tmp;
	return tmp;
	delete tmp;
}