//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	string number_1;
	int number_2, total;
	cout << "Entre com dois n�meros : ";
	cin >> number_1 >> number_2;
	total = stoi(number_1) * (number_2);
	cout << "A multiplica��o entre eles � " << total << ".";
}