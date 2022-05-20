struct Data {
	int dia;
	int mes;
	int ano;
	char barra;
};
struct Dados {
	Data devolucao;
	Data emprestimo;
	int matricula;
	char identificar[5];
	float multa;
};
struct Meses {
	char mes[20];
};
void Linhas(char a, int b);
int operator-(Dados c, Dados d);
float TotalMultas(Dados array, int size, Dados devolucao);
void Resumo(Dados * emprestimo, Dados * devolucao);