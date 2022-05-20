//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int count = 0;
	cout << "Você quer que eu conte de 1 até que número? ";
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