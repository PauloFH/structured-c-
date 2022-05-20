//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	
	int car[10]{}, temp, ct{}, mt_car[10]{}, mt_total{};
	cout << "As últimas 10 velocidades registradas: ";
	for (int i{}; i < 10; i++) {
		cin >> car[i];
	}
	for (int i{}; i < 10; i++) {
		if (car[i] > 80) {
			ct++;
			temp = car[i];
			while (temp > 80){
				mt_car[i] += 8;
				temp--;
			}
			mt_total += mt_car[i];
			cout << car[i] << " Km/h excede o limite = multa de R$" << mt_car[i] << endl;
		}
	}
	cout << ct << " carros foram multados em um valor total de R$" << mt_total;
	
}