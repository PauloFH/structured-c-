//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int valor = 10, * temp, soma = 0;
	temp = &valor;//RECEBE POSIÇÃO D VALOR
	*temp = 20;// VALOR RECEBE 20
	temp = &soma;//TEMP RECEBE A POSIÇÃO DE VALOR
	*temp = valor;//SOMA RECEBE VALOR DE VALOR
	cout << "valor: " << valor << "\nsoma: " << soma << endl;
}//TANTO SOMA QUANTO VALOR VÃO GUARDAR 20