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
	cout << "Que horas s�o? ";
	cin >> rlg.HH >> rlg.pnt >> rlg.MM;
	unsigned* prhr = &rlg.HH;
	unsigned* prmn = &rlg.MM;
	MostrarHorario(prhr, prmn);
}

void MostrarHorario(unsigned* hr, unsigned* mn){
	*hr += 1;
	cout << "Seu rel�gio est� atrasado, o hor�rio correto � " <<*hr << ":" << *mn << ".";
}
