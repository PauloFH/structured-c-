//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
struct Nadador{
	char Nome[20];
	int idade;
	char categoria[5][12]{ "Infantil", "Juvenil", "Adolescente", "Adulto", "Sênior" };
};

int main() {
	system("chcp 1252 > nul");
    int i{};
    Nadador atlt;
    cout << "Qual o nome do nadador ?";
    cin.getline(atlt.Nome, 20);
    cout << "Qual a idade do nadador ?";
    cin >> atlt.idade;
    int idade = atlt.idade;
    if ((idade >= 5) && (idade <= 7)) {
        i = 0;
    }
    if ((idade >= 8) && (idade <= 10)) {
        i = 1;
    }
    if ((idade >= 11) && (idade <= 15)) {
        i = 2;
    }
    if ((idade >= 16) && (idade <= 30)) {
        i = 3;
    }
    if (idade >= 31) {
        i = 4;
    }
    cout << atlt.Nome << " " << atlt.idade << " " << atlt.categoria[i];
}