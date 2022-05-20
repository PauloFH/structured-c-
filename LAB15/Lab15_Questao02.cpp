//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	int* val = new int;
	system("chcp 1252 > nul");
	cout << "Conteúdo armazenado: ";
	cin >> *val;
	cout << "Valor do espaço: " << *val << " no local:  " << val<<endl;
	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *val;
	cout << "Valor do espaço: " << *val << " no local " << val << endl;
	delete val;
}