//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");
	int hr, mn;
	char ch;
	cout << "Que horas s�o?";
	cin >> hr >> ch >>  mn;

	hr = hr + 1;
	if (hr > 24) {
		hr = 01;
	}
	cout << "O seu rel�gio est� atrasado. \n";
	cout << "Agora s�o " << hr << ch << mn << ".";
	system("pause");
}