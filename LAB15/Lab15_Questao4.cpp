//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Local{
	char nome[20];
	char país[20];
	char continente[20];

};
int main() {
	system("chcp 1252 > nul");
	int control;
	cout << "Quantos locais quer visitar nas proximas ferias? ";
	cin >> control;
	Local* locais = new Local[control];
	cout << control << " Locais que serão visitados: " << endl;;
	for (int i = 1; i <= control; i++) {
		cout << "------------------------" << endl;;
		cout << i << " ° Local"<<endl;
		cout << " Nome: "; cin >> locais->nome;
		cout << "País: "; cin >> locais->país;
		cout << "Continente: "; cin >> locais->continente;

	}
	;		delete [] locais;
}