//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main() {
	system("chcp 1252 > nul");

	long long resultado = 200530 * 420800;
	//por serem dois n�meros int sendo multiplicados, o buffer � estourado antes de ser armazenado
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	//como os valores j� s�o definidos como long long, o buffer j� aloca o valor que suporte a opera��o
}

long long calculo(long long a, long long b)
{
	return a * b;
}