//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	string name, date, complete, main;
	cout << "Nome: ";
	getline(cin,name);
	main = " esteve aqui em ";
	cout << "Data: ";
	cin >> date;
	complete = name + main + date;
	cout << complete;
}