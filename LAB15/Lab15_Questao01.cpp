//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float peso;
	peso = 30;
	cout << peso;
	delete peso;//Como peso � uma vari�vel criada automaticamente, n�o pode ser apagada pelo delete. O Delete s� apaga ponteiros
				//de aloca��o din�mica.

}