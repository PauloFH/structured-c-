//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vector[5];
	for (int i = 0; i <= 60; i++) {
		vector[i] = 60;
		cout << "posição " << i << " valor : " << vector[i] << endl;
	}
}
/*Usando um vetor de 5 posições, sempre que chega na 10 posição o programa trava e dá erro 
de verificação em tempo de execução porque corrompeu todos os espaços em volta do vetor
*/