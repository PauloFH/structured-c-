//Paulo Roberto Fernandes Holanda
#include  <iostream>
#include<random>
using namespace std;

int main() {
	system("chcp1256");
	int ale{}, tent{};
	random_device rd;
	default_random_engine al(rd());
	uniform_int_distribution<> dist(1, 10);
	ale = dist(al);
	do {
		cout << "Acerte qual é o número aleatório: ";
		cin >> tent;
		if (tent < ale) {
			cout << "muito baixo " ;
		}
		else if (tent > ale) {
			cout << "muito alto ";
		}
		else cout << "Acertou!! ";
	} while (ale != tent);
}