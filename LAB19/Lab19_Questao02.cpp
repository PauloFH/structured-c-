//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
enum meses {
	janeiro, fevereiro, março, abril,
	maio, junho, julho, agosto, setembro,
	outubro, novembro, dezembro
};
void meses(int mes);
int main() {
	int liv_mes[3][12]{}, soma[3]{}, total{};
	
	system("chcp 1252 > nul");
	for (int i{}; i < 3; i++) {
			cout << "Digite o número de livros vendidos no " << (i+1)<< "° ano:" <<endl;
		for (int j{}; j < 12; j++) {
			meses(j);
			cin >> liv_mes[i][j];
			
		}
	}
	cout << "TOTAL DE VENDAS \n";
	for (int i{}; i < 3; i++) {
		for (int j{}; j < 12; j++) {
			soma[i] += liv_mes[i][j];
		}
		cout << (i + 1) << "o ano : " << soma[i] << endl;
		total += soma[i];
	}
	cout << "\nNos três anos foram vendidos " << total << " livros.\n";
}

void meses(int mes)
{
	switch (mes)
	{
	case janeiro: cout << "janeiro: ";
		break;
	case fevereiro: cout << "fevereiro: " ;
		break;
	case março: cout << "março: ";
		break;
	case abril: cout << "abril: ";
		break;
	case maio: cout << "maio: ";
		break;
	case junho: cout << "junho: ";
		break;
	case julho: cout << "julho: ";
		break;
	case agosto: cout << "agosto: ";
		break;
	case setembro: cout << "setembro: ";
		break;
	case outubro: cout << "outubro: ";
		break;
	case novembro: cout << "novembro: ";
		break;
	case dezembro: cout << "dezembro: ";
		break;
	}
}
