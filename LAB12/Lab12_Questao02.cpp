//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <string>
using namespace std;

struct Palavra{
	char word_BR[20];
	char word_IN[20];
	char word_ES[20];
};
int main() {
	system("chcp 1252 > nul");

	Palavra dicion�rio[10] = { { "ma��","apple","manzana" }, {"banana","banana","pl�tano" } };
	cout << "Insira a tradu��o de uma palavra:(portugu�s, ingl�s e Espanhol) " << endl;
	cout << "PT: ";
	cin.getline(dicion�rio[2].word_BR, 20);
	cout << "IN: ";
	cin.getline(dicion�rio[2].word_IN, 20);
	cout << "ES: ";
	cin.getline(dicion�rio[2].word_ES, 20);
	for (int i = 0; i < 3; i++) {
		cout << "----------------" << endl;
		cout << "portugu�s: " << dicion�rio[i].word_BR << endl << "ingl�s: " << dicion�rio[i].word_IN << endl;
		cout << "Espanhol: " << dicion�rio[i].word_ES << endl;
	}
	cout << "----------------" << endl;
}


