//Paulo Roberto Fernandes Holanda
#pragma once
#include <iostream>
using namespace std;

struct datas { // Registro do tipo de datas dia/mes/ano
	int dia;
	int mes;
	int ano;
	char barra;
};

struct devolucao { // Registro da devoluçao  
	datas d_devs;
	int mat_aluno;
	char id_livro[5];
	datas d_emps;
};

void linha(char barra, int tamanho);
float multat(devolucao* dev, int tam, datas d_dev);

int operator-(datas d_devolucao, datas d_emprestimo);

void exibir(devolucao* a);