//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int a, b, ab, at, vm;
	cout << "Lado a: ";
	cin >> a;
	cout << "Lado b: ";
	cin >> b;
		ab = a * b;

	cout << "Área da base = " << ab << endl;

	cout << "Altura: ";
	cin >> at;
	vm = at * ab;
	cout << "Volume do prisma = " << vm << endl;
	system ("pause");
}