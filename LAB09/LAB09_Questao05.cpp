//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	double geral = 245.795;
	int base;
	base = (int) geral;
	geral = geral * 100;
	base = base * 100;
		cout << geral << endl;
		cout << base << endl;
		/*Como a vari�vel base s� ler inteiro, tudo ap�s o ponto � descartado
		ao fazer a multiplica��o, a vari�vel geral se tornar� 24500 por ter ignorado o 0.795
		enquanto a vari�vel geral ser� 24579.5, mantendo o ponto flutuante.
		*/
}	