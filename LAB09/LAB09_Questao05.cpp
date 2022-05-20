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
		/*Como a variável base só ler inteiro, tudo após o ponto é descartado
		ao fazer a multiplicação, a variável geral se tornará 24500 por ter ignorado o 0.795
		enquanto a variável geral será 24579.5, mantendo o ponto flutuante.
		*/
}	