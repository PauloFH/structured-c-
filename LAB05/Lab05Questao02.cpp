//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

void salario();
void salarioAu();

double sal, salal;
int main() {
	system("chcp 1252 > nul");
	salario();
	salarioAu();

}

void salario() {
	cout << "Sal�rio atual: ";
		cin >> sal;

}
void salarioAu() {
	salal = sal + (sal *0.15);
	cout << "Sal�rio ajustado para R$" << salal;
}