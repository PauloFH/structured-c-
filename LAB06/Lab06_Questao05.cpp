//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <climits>
using namespace std;

bool isShort(long long a);
bool isInt(long long a);

long long controle;
bool verificador_short, verificador_int;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um valor inteiro: ";
	cin >> controle;
	verificador_short = isShort(controle);
	verificador_int = isInt(controle);
	if (verificador_short == true) {
		cout << controle << " cabe em 16 bits\n";
	}
	else {
		cout << controle << " não cabe em 16 bits\n";
	}
	if (verificador_int == true) {
		cout << controle << " cabe em 32 bits\n";
	}
	else {
		cout << controle << " não cabe em 32 bits\n";
	}
}

bool isShort(long long a) {
	bool sht;
	if (controle >= SHRT_MIN && controle <= SHRT_MAX) {
		sht = true;
	}
	else {
		sht = false;
	}
	return sht;
}

bool isInt(long long a) {
	bool in;
	if (controle >= INT_MIN && controle <= INT_MAX) {
		in = true;
	}
	else {
		in = false;
	}
	return in;
 }