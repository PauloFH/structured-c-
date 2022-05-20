//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	string password;
	cout << "Digite a senha: ";
	cin >> password;
	if (password == "Progcomp"){
		cout << "senha correta.";
	}
	else {
		cout << "Senha incorreta.";
	}
}