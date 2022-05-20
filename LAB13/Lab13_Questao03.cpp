//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Data{
	int day;
	int year;
	int month;
};
struct Horario{
	int hr;
	int min;
};
struct evts {
	Data date;
	Horario Time;
	char name[18];
};
int main() {
	evts events[10]{};
	 char clean[1];
	system("chcp 1252 > nul");
	cout << "Entre com 2 eventos:" << endl;
	for (int i = 0; i < 2; i++) {
		cout <<"#" << (i+1) << endl << "Data:";
		cin >> events[i].date.day >> events[i].date.month >> events[i].date.year;
		cout << "Hora: ";
		cin >> events[i].Time.hr >> events[i].Time.min;
		cout << "Desc:";
		cin.getline(clean, 1);
		cin.getline(events[i].name,18);
	}
	cout << "-------------------- \nEventos Cadastrados" << endl;
	for (int i = 0; i < 2; i++) {
		cout << events[i].date.day <<"/"<< events[i].date.month << "/" << events[i].date.year << " ";

		cout << events[i].Time.hr << ":"<< events[i].Time.min << " ";
		cout << events[i].name << endl;
	}
}