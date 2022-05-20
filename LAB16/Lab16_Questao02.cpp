//Paulo Roberto Fernandes Holanda
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char pl[4][20]{};
	int crl{3};
	system("chcp 1252 > nul");

	cout << "Digite 4 palavras:" <<endl;
	for  (int i = 0; i < 4; i++){
		cin >> pl[i];
		crl += strlen(pl[i]);
	}
	char* din_pl = new char[crl];
	strcpy(din_pl, pl[0]);
	for (int i = 1; i < 4; i++) {
		strcat(din_pl, " ");
		strcat(din_pl, pl[i]);
	}
	cout << "Concatenando as palavras obtém-se: " << endl;
	cout << din_pl;
}