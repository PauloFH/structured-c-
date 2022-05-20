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

	Palavra dicionário[10] = { { "maçã","apple","manzana" }, {"banana","banana","plátano" } };
	cout << "Insira a tradução de uma palavra:(português, inglês e Espanhol) " << endl;
	cout << "PT: ";
	cin.getline(dicionário[2].word_BR, 20);
	cout << "IN: ";
	cin.getline(dicionário[2].word_IN, 20);
	cout << "ES: ";
	cin.getline(dicionário[2].word_ES, 20);
	for (int i = 0; i < 3; i++) {
		cout << "----------------" << endl;
		cout << "português: " << dicionário[i].word_BR << endl << "inglês: " << dicionário[i].word_IN << endl;
		cout << "Espanhol: " << dicionário[i].word_ES << endl;
	}
	cout << "----------------" << endl;
}


