//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

struct Horario{
	char ponto;
	unsigned short hr;
	unsigned short min;
	unsigned int min_geral;
};

Horario ler();
void exibir(Horario ini, Horario end, Horario sub);
Horario subtrair(Horario a, Horario b);

int main() {
	system("chcp 1252 > nul");
	Horario inicio{};
	Horario Subtraido{};
	Horario fim{};
	cout << "Inicio: ";
	inicio = ler();
	cout << "Fim: ";
	fim = ler();
	cout << endl;
	Subtraido = subtrair(inicio, fim);
	exibir(inicio, fim, Subtraido);
}

Horario ler( ){
	Horario temp{};
	cin >> temp.hr >> temp.ponto >> temp.min;
	return temp;
}
void exibir(Horario ini, Horario end, Horario sub){
	cout << "Entre " << ini.hr << ini.ponto << ini.min << " e ";
	cout << end.hr << end.ponto << end.min << " existem " << sub.min_geral << " minutos, isso é ";
	cout << sub.hr << "h e " << sub.min << " minutos.";


}

Horario subtrair(Horario inicio, Horario fim){
	Horario temp_inicio{};
	Horario temp_fim{};
	temp_inicio = inicio;
	temp_fim = fim;
	if (temp_inicio.min > temp_fim.min) {
		temp_fim.hr -=1;
		temp_fim.min += 60;
	}
	temp_fim.min -= temp_inicio.min;
	temp_fim.hr -= temp_inicio.hr;
	
	for (int i = 0; i < temp_fim.hr; i++) {
		temp_fim.min_geral += 60 + temp_fim.min;
	}
	return temp_fim;
}


