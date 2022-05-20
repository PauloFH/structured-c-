//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Horario {
	unsigned HH;
	unsigned MM;
	char pnt;
};

void MostrarHorario(unsigned* hr, unsigned* mn);

int main() {
	system("chcp 1252 > nul");
	Horario rlg{};
	cout << "Que horas são? ";
	cin >> rlg.HH >> rlg.pnt >> rlg.MM;
	unsigned* prhr = &rlg.HH;
	unsigned* prmn = &rlg.MM;
	MostrarHorario(prhr, prmn);
}

void MostrarHorario(unsigned* hr, unsigned* mn){
	*hr += 1;
	cout << "Seu relógio está atrasado, o horário correto é " <<*hr << ":" << *mn << ".";
}
