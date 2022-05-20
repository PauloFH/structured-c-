//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main() {
	system("chcp 1252 > nul");

	long long resultado = 200530 * 420800;
	//por serem dois números int sendo multiplicados, o buffer é estourado antes de ser armazenado
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;
	//como os valores já são definidos como long long, o buffer já aloca o valor que suporte a operação
}

long long calculo(long long a, long long b)
{
	return a * b;
}