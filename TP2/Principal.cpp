#include <iostream>
#include "biblioteca.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	const float taxa = 0.80;
	int size;
	cout << "Qual o número de devoluções para hoje? ";
	cin >> size;
	Dados* returns = new Dados[size];

	Dados dataDevolucao;
	cout << "Digite a data de hoje: ";
	cin >> dataDevolucao.devolucao.dia
		>> dataDevolucao.devolucao.barra
		>> dataDevolucao.devolucao.mes
		>> dataDevolucao.devolucao.barra
		>> dataDevolucao.devolucao.ano;
	const int saveMonth = dataDevolucao.devolucao.mes;
	
	Linhas('-', 42);
	
	int atraso;
	float multaTotal = 0.0;
	for (int i = 0; i < size; i++) {
		cout << "Aluno"; cout << right; cout.width(7); cout << ": ";
		cin >> returns[i].matricula;

		cout << "Livro"; cout << right; cout.width(7); cout << ": ";
		cin >> returns[i].identificar;

		cout << "Empréstimo: ";
		cin >> returns[i].emprestimo.dia
			>> returns[i].emprestimo.barra
			>> returns[i].emprestimo.mes
			>> returns[i].emprestimo.barra
			>> returns[i].emprestimo.ano;

		atraso = operator-(returns[i], dataDevolucao);
		cout << "Atraso"; cout << right; cout.width(6); cout << ": ";
		cout << atraso << " dia(s)" << endl;

		returns[i].multa = float (atraso) * taxa;
		cout << fixed;
		cout.precision(2);
		cout << "Multa"; cout << right; cout.width(7); cout << ": ";
		cout << "R$" << returns[i].multa << endl;

		multaTotal += TotalMultas(returns[i], size, dataDevolucao);
		Linhas('-', 35);
	}
	
	Linhas('-', 42);
	
	Meses* month = new Meses[13];
	strcpy_s(month[1].mes, "janeiro");
	strcpy_s(month[2].mes, "fevereiro");
	strcpy_s(month[3].mes, "março");
	strcpy_s(month[4].mes, "abril");
	strcpy_s(month[5].mes, "maio");
	strcpy_s(month[6].mes, "junho");
	strcpy_s(month[7].mes, "julho");
	strcpy_s(month[8].mes, "agosto");
	strcpy_s(month[8].mes, "setembro");
	strcpy_s(month[10].mes, "outubro");
	strcpy_s(month[11].mes, "novembro");
	strcpy_s(month[12].mes, "dezembro");
	
	cout << "Resumo do dia " << dataDevolucao.devolucao.dia;
	cout << " de " << month[saveMonth].mes;
	cout << " de " << dataDevolucao.devolucao.ano;
	cout << "\n\n";

	for (int j = 0; j < size; j++) {
		Resumo(&returns[j], &dataDevolucao);
	}

	cout << "\n";
	cout << "Total em multas: " << multaTotal << endl;

	Linhas('-', 42);

	cout << "\n";
	cout << "Encerrando programa...\n";

	delete[] returns;
	delete[] month;
}