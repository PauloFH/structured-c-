//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int sm{}, i{ 0 };
	cout << " soma de todos os números impares de 0 a 100: ";
	do
	{
		if (i % 2 != 0) {
			sm += i;
			i++;
		}
		else i++;
	} while (i <= 100);
		
	cout << sm;
}

/*USANDO FOR
int sm{};
	cout << " soma de todos os números impares de 0 a 100: ";
	for (int i = 0; i <= 100; i++) {
		if (i % 2 != 0) {
			sm += i;
		}
	}
	cout << sm;

	USANDO WHILE
		int sm{}, i{ 0 };
	cout << " soma de todos os números impares de 0 a 100: ";
	while ( i <= 100) {
		if (i % 2 != 0) {
			sm += i;
			i++;
		}else i++;
	}
	cout << sm;
*/