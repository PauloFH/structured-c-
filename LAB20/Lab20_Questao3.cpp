//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	char ch{}, temp{};
	system("chcp 1252 > nul");
	cout << "Digite um texto (# para finalizar):";
	do {
		temp = ch;
		cin.get(ch);

		if (ch == '#') {
			cout << temp;
		}
		else { cout << ch; }

	} while (ch != '#');
}