//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
int main() {
	int val1, val2, quociente, resto;
	system("chcp 1252 > nul");
	cout << "Digite dois n�meros inteiros:  ";
	cin >> val1 >> val2;
	quociente = val1 / val2;
	resto = val1 % val2;
	cout << "O quociente " << val1 <<"/"<< val2 << " � " << quociente <<endl;
	cout << "O resta da divis�o " << val1 << "%" << val2 << " � " << resto;
}
