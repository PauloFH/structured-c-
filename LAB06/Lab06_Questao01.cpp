//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int hr, mn, hr_ida, mn_ida, hr_chegada, mn_chegada;
char ch = ':';
int main() {
	system("chcp 1252 > nul");
	cout << "Digite o horário de partida (HH:MM): ";
	cin >> hr_ida >> ch >> mn_ida;
	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> hr_chegada >> ch >> mn_chegada;
	hr = hr_chegada - hr_ida;
	if (mn_chegada < mn_ida) {
		hr -= 1;
		mn_chegada += 60;
	}
	mn = mn_chegada - mn_ida;
	cout << "O tempo total de viagem foi " << hr << " horas e " << mn << " min.";
}