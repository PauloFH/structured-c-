//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	int* val = new int;
	system("chcp 1252 > nul");
	cout << "Conte�do armazenado: ";
	cin >> *val;
	cout << "Valor do espa�o: " << *val << " no local:  " << val<<endl;
	cout << "Digite novo valor para esse bloco de mem�ria: ";
	cin >> *val;
	cout << "Valor do espa�o: " << *val << " no local " << val << endl;
	delete val;
}