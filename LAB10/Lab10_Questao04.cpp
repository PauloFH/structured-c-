//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vector[5];
	for (int i = 0; i <= 60; i++) {
		vector[i] = 60;
		cout << "posi��o " << i << " valor : " << vector[i] << endl;
	}
}
/*Usando um vetor de 5 posi��es, sempre que chega na 10 posi��o o programa trava e d� erro 
de verifica��o em tempo de execu��o porque corrompeu todos os espa�os em volta do vetor
*/