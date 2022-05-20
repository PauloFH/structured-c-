//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstring>
using namespace std;

struct Login{
	char name[10];
	char password[10];
};

int main() {
	system("chcp 1252 > nul");
	int nm{}, sh{};
	Login administrator{ "admin", "admin" };
	Login user{};
	int ct1 = 0, ct2 = 0;
	cout << "nome: ";
	cin.getline(user.name, 10);
	cout << "password: ";
	cin.getline(user.password, 10);
	nm = strlen(user.name);
	sh = strlen(user.password);

	for (int i = 0; i <nm; i++) {
		if (administrator.name[i] == user.name[i]) {
			++ct1;
		}
	}

	for (int i = 0; i < sh ; i++) {
		if (administrator.password[i] == user.password[i]) {
			++ct2;
		}
	}

	if ((ct1 == nm) && (ct2 == sh)) {
		cout << " Senha e login corretas";
	}
}