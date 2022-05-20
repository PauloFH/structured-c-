//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <string>
using namespace std;

struct Horario {
	char ponto;
	unsigned short hr;
	unsigned short min;
	unsigned short seg;
};

struct Data {
	char barra;
	unsigned short dia;
	unsigned short mes;
	unsigned int ano;
};
struct  Evento{
	Data ev;
	Horario hr;
	string local;

};
int main() {
	Evento ev{};
	system("chcp 1252 > nul");
		cout << " entre com os dados de um evento: ";
		cout << "Data(Dia / mês / ano)";
		cin >> ev.ev.dia >> ev.ev.barra >> ev.ev.mes >> ev.ev.barra >> ev.ev.ano;
		cout << "Horario(Hora:minuto:segundo): ";
		cin >> ev.hr.hr >> ev.hr.ponto >> ev.hr.min >> ev.hr.ponto >> ev.hr.seg;
		cout << "LOCAL: ";
		cin >> ev.local;
		cout << endl << "Evento" <<endl<< "-------------------------" <<endl;
		cout << "Data: " <<ev.ev.dia << ev.ev.barra << ev.ev.mes << ev.ev.barra << ev.ev.ano <<endl;
		cout << "Horario: " << ev.hr.hr <<  ev.hr.ponto << ev.hr.min << ev.hr.ponto << ev.hr.seg << endl;
		cout << "Local: " << ev.local;
		cout << "-------------------------";
}