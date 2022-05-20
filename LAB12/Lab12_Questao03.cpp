//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Bank_account {
	unsigned client_id;
	char client_name[20];
	double balance;
};

struct Palavra {
	char word_BR[20];
	char word_IN[20];
	char word_ES[20];
};

void exibir_banco();
void exibir_palavras();

int main() {
	system("chcp 1252 > nul");
	unsigned int cs;
	cout << "Deseja exibir dados do banco ou das palabras? (digite 1 para banco e 0 para palavras)";
	cin >> cs;
	switch (cs)
	{
	case 1:
		exibir_banco();
		break;
	
	case 0:
		exibir_palavras();
		break;
	}
}

void exibir_banco(){
		Bank_account client_1{32113,"Ricardo",3440.50};
		cout << "~~~Bem vindo ao banco Lisossomos!~~~" << endl;
		cout << "---------------------------" << endl;
		cout << "Bem vindo, " << client_1.client_name << endl;
		cout << "---------------------------" << endl << "Seu Saldo atual � de : R$";
		cout << client_1.balance;
}

void exibir_palavras(){
	Palavra dicion�rio[10] = { { "ma��","apple","manzana" }, {"banana","banana","pl�tano" },{"Preto", "Black", "negro"}};

	for (int i = 0; i < 3; i++) {
		cout << "----------------" << endl;
		cout << "portugu�s: " << dicion�rio[i].word_BR << endl << "ingl�s: " << dicion�rio[i].word_IN << endl;
		cout << "Espanhol: " << dicion�rio[i].word_ES << endl;
	}
	cout << "----------------" << endl;
}
