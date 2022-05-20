//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

union jogador {
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};
struct gol {
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

int main() {
	system("chcp 1252 > nul");
	gol lastgoals[3]{};
	char pt = ':';
	cout << "Digite os dados dos 3 últimos gols:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Gol: ";
		cin >> lastgoals[i].jog.nome >> lastgoals[i].hora >> pt >> lastgoals[i].min;
	}
}