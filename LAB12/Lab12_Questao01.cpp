//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Bank_account{
	unsigned client_id;
	char client_name[20];
	double balance;
};

int main() {
	system("chcp 1252 > nul");
	double deposit;
	Bank_account client_1{};
	cout << "~~~Bem vindo ao banco Lisossomos!~~~" << endl;
	cout << "Para criar sua conta digite inicialmente seu nome: ";
	cin.getline(client_1.client_name, 20);
	cout << "Insira seu ID de Cliente:";
	cin >> client_1.client_id;
	cout << endl << "CONTA CRIADA COM SUCESSO" << endl;
	cout << "---------------------------" << endl;
	cout<< "Bem vindo, " << client_1.client_name << endl << "Seu Saldo atual é de : R$";
	cout << client_1.balance << endl << "Deseja fazer um depósito de qual valor? " << endl << " R$";
	cin >> deposit;
	client_1.balance += deposit;
	cout << "DEPOSITO REALIZADO COM SUCESSO" << endl;
	cout << "Bem vindo, " << client_1.client_name << endl;
	cout << "---------------------------" << endl << "Seu Saldo atual é de : R$";
	cout << client_1.balance;
}