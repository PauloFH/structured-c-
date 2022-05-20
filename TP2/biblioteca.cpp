#include <iostream>
#include "biblioteca.h"
using namespace std;

void Linhas(char a, int b) {
	for (int i = 0; i < b; i++) {
		cout << a;
	}
	cout << "\n";
}

int operator-(Dados c, Dados d) {
	int diasAtraso = 0;
	short quebra1 = 0;
	short quebra2 = 0;
	int meses[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	while (c.emprestimo.mes != d.devolucao.mes && quebra1 == 0) {
		for (int i = c.emprestimo.mes; i < d.devolucao.mes; i++) {
			diasAtraso += meses[i];
		}
		diasAtraso += d.devolucao.dia - c.emprestimo.dia - 3;
		quebra1 = 1;
	}
	while (c.emprestimo.mes == d.devolucao.mes && quebra2 == 0) {
		diasAtraso = d.devolucao.dia - c.emprestimo.dia - 3;
		quebra2 = 1;
	}
	while (diasAtraso == 1) {
		return diasAtraso;
	}
	while (diasAtraso == 2) {
		return diasAtraso;
	}
	while (diasAtraso < 3) {
		return diasAtraso = 0;
	}
	return diasAtraso;
}

float TotalMultas(Dados array, int size, Dados devolucao) {
	const float tax = 0.80;
	int delay;
	float totalCharged = 0.0;

	delay = operator-(array, devolucao);
	totalCharged = (delay * tax) + totalCharged;

	return totalCharged;
}

void Resumo(Dados * emprestimo, Dados * devolucao) {
	cout << emprestimo->matricula << " "
		<< emprestimo->identificar << " "
		<< emprestimo->emprestimo.dia << "/"
		<< emprestimo->emprestimo.mes << "/"
		<< emprestimo->emprestimo.ano << " -> R$"
		<< emprestimo->multa << endl;
}