//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	char player[20]{};
	int len{}, trust{};

	cout << "Digite jogador/time:";
	cin >> player; //Pele/Santos

	len = strlen(player);
	cout << "O nome do jogador tem ";
	for (int i = 0; i <= len; i++) {
		if (player[i] == '/') {
			cout << (i) << " Letras" << endl;
			trust = i+1;
			i = len;
		}
	}
	char* player_p = &player[trust];
	cout << "O seu time é o ";
		cout << player_p;
	cout << ".";
}