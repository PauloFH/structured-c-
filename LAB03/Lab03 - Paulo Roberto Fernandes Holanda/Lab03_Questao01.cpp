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
		cout << "A quantos anos voc� fuma?  ";
		cin >> cig_T;
		cout << endl;
		cout << "Quantos cigarros voc� fuma por dia? ";
		cin >> cig_D;
		cout << endl;
		cout << "Qual o pre�o m�dio de uma carteira de cigarros? ";
		cin >> cig_P;
		cout << endl;

			PT = (((cig_P / 20) * cig_D) * 365)* cig_T;
		
			cout << "Voc� gastou at� agora R$" << PT << " com cigarros. \n\n";


		cout << "Se deseja repetir o programa aperte 's' \n Para finalizar digite 'n'  ";
		cin >> control;
	}
	return 0;
}