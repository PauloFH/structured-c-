//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");

	int cig_D, cig_T;
	float cig_P, PT;
	char control;

	control = 's';

	while (control == 's'|| control == 'S') {
		cout << "A quantos anos você fuma?  ";
		cin >> cig_T;
		cout << endl;
		cout << "Quantos cigarros você fuma por dia? ";
		cin >> cig_D;
		cout << endl;
		cout << "Qual o preço médio de uma carteira de cigarros? ";
		cin >> cig_P;
		cout << endl;

			PT = (((cig_P / 20) * cig_D) * 365)* cig_T;
		
			cout << "Você gastou até agora R$" << PT << " com cigarros. \n\n";


		cout << "Se deseja repetir o programa aperte 's' \n Para finalizar digite 'n'  ";
		cin >> control;
	}
	return 0;
}