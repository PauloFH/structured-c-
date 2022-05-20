//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	char strg[80]{};
	int x{0};
	system("chcp 1252 > nul");
	cout << "Digite um texto: ";
		cin.getline( strg,80);
		while (strg[x] != '@') {
			cout << strg[x];
			x++;
	}
}