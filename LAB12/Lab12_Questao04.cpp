//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <string>
using namespace std;

struct Livro {
	string nome;
	unsigned ano;
	string autor;
};
struct Jogo{
	string nome;
	string tipo;
	string plataforma;
};
int main() {
	system("chcp 1252 > nul");
	unsigned int cs, i = 0;
	bool control = true;
	Jogo jogos_emprestados[20]{};
	Livro livros_emprestados[20]{};
	while (control == true) {
		cout << "Digite 1 se quer um livro emprestado ou 0 se quer um jogo emprestado." << endl;
		cin >> cs;
		switch (cs) {
		case 1:
			cout << "Nome do livro?";
			cin >> livros_emprestados[i].nome;
			cout << "Nome do Autor?";
			cin >> livros_emprestados[i].autor;
			cout << "Ano de publicação";
			cin >> livros_emprestados[i].ano;
			break;
		case 0:
			cout << "Nome do Jogo: ";
			cin >> jogos_emprestados[i].nome;
			cout << "Tipo o jogo: ";
			cin >> jogos_emprestados[i].tipo;
			cout << "Plataforma do jogo: ";
			cin >> jogos_emprestados[i].plataforma;
			break;
		}
		i++;
		cout << "Para encerrar o programa digite 0, para repitir 1";
		cin >> control;
	}
}