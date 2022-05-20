//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;


int main() {
	system("chcp 1252 > nul");

	float tm, th, eco, eci, ena, tt , ps , mets;
	char h, m;

	cout << "Digite seu peso em quilos: ";
	cin >> ps;
	cout << "Digite o tempo de corrida:";
		mets = 7;
		cin >> th >> h >> tm >> m;
		eco = ps * mets * (((th * 60) + tm) / 60);

	cout << "Digite o tempo de ciclismo:";
		mets = 7;
		cin >> th >> h >> tm >> m;
		eci = ps * mets * (((th * 60) + tm) / 60);
	cout << "Digite o tempo de natação:";
		mets = 8;
		cin >> th >> h >> tm >> m;
		ena = ps * mets * (((th * 60) + tm) / 60);

		tt = ena + eco + eci;
	cout << "Você gastou um total de " << tt << " calorias.";


}