//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");
	int hr, mn;
	char ch;
	cout << "Que horas são?";
	cin >> hr >> ch >>  mn;

	hr = hr + 1;
	if (hr > 24) {
		hr = 01;
	}
	cout << "O seu relógio está atrasado. \n";
	cout << "Agora são " << hr << ch << mn << ".";
	system("pause");
}