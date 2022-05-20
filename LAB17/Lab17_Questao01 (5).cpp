//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int x{}, sm1{}, sm2{}, df{};
	cout << "tamanho: ";
	cin >> x;
	cout << "A  diferença da soma dos quadrados dos " << x << " primeiros números naturais e o quadrado da soma é: ";
	for (int i = 0; i <= x; i++) {
		sm1 += pow(i, 2);
		}
	for (int i = 0; i <= x; i++) {
		sm2 += i;
	}
	sm2 = pow(sm2, 2);
	df = sm2 - sm1;
		cout << df;

}
