//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float peso;
	peso = 30;
	cout << peso;
	delete peso;//Como peso é uma variável criada automaticamente, não pode ser apagada pelo delete. O Delete só apaga ponteiros
				//de alocação dinâmica.

}