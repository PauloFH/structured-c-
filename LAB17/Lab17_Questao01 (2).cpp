//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int count = 0;
	cout << "Voc� quer que eu conte de 1 at� que n�mero? ";
	cin >> count;
	for (int i = 1; i <= count; i++) {
		cout << " " << i;
	}
	cout << endl;
	for (int i = count; i >= 1 ; i--) {
		cout << " " << i;
	}
	cout << endl;
	for (int i = 1; i <= count; i++) {
		if (i%2 != 0) {
			cout << " " << i;
		}
	}
	cout << endl;

	for (int i = count; i >= 1; i--) {
		if (i % 2 != 0) {
			cout << " " << i;
		}
	}

	cout << endl;
	
	for (int i = 1; i <= count; i++) {

		if (i % 2 == 0) {
			cout << " " << i;
		}
	}

	cout << endl;
	for (int i = count; i >= 1; i--) {
		if (i % 2 == 0) {
			cout << " " << i;
		}
	}
	cout << endl;
}