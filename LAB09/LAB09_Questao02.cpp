//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
int main() {
	int val1, val2, quociente, resto;
	system("chcp 1252 > nul");
	cout << "Digite dois números inteiros:  ";
	cin >> val1 >> val2;
	quociente = val1 / val2;
	resto = val1 % val2;
	cout << "O quociente " << val1 <<"/"<< val2 << " é " << quociente <<endl;
	cout << "O resta da divisão " << val1 << "%" << val2 << " é " << resto;
}
