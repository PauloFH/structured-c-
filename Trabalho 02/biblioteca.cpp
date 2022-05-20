//Paulo Roberto Fernandes Holanda
#include "biblioteca.h"
#include <locale.h>


void linha(char barra ,int tamanho){
	for (int i{}; i <= tamanho; i++) {// imprime a quantidade de linhas ('-') desejadas
		cout << barra;
	}
	cout << endl;
}

float multat(devolucao *dev, int tam, datas d_dev) {
	float dia_t = { (float)0.8 }, multa_total{}; 
	int dias{};
	for (int i{}; i < tam; i++) {
		dias = operator-(d_dev, dev[i].d_emps);// calcula os atrasos dos livros e soma o valor da multa de cada um deles
		multa_total += dias * dia_t;
	}
	return multa_total;
}

int operator-(datas d_devolucao, datas d_emprestimo){	
	unsigned int ats{};
	int mes_emprestimo = d_emprestimo.mes;
datas temp = d_devolucao;// recebe a data de devolução
int i = d_devolucao.mes - d_emprestimo.mes;// recebe a diferença de meses
int x = 1;

while (i> 0 && x>0)
{
	//Vai olhar a quantidade de meses de diferença e conferir qual mês é e quantos dias vai adicionar de acordo com cada mês
	while (mes_emprestimo == 2 && i >= 1 && x > 0) {// 
		temp.dia += 28;
		i--;
		x--;
		mes_emprestimo--;
	}
	while ((mes_emprestimo == 4 || mes_emprestimo == 6 || mes_emprestimo == 9 || mes_emprestimo == 11) && i >= 1 && x > 0) {
		temp.dia += 30;
		i--;
		x--;
		mes_emprestimo--;
	}
	while ((mes_emprestimo == 1 || mes_emprestimo == 3 || mes_emprestimo == 5 || mes_emprestimo == 7 || mes_emprestimo == 8 || mes_emprestimo == 10 || mes_emprestimo == 12) && i >= 1 && x >0) {
		temp.dia += 31;
		i--;
		x--;
		mes_emprestimo++;
	}
	x++;
	
}
	ats = (temp.dia - (d_emprestimo.dia)-3); // o tempo de atraso é calculado com a diferença de dias menos 3(prazo de entrega sem multa)
	return ats;
}

void exibir(devolucao * a){
	locale C("C");
	cout.imbue(C);

		cout << a->mat_aluno << " ";
		cout << a->id_livro << " ";
		cout.width(2); cout.fill('0'); cout << a->d_emps.dia << "/";// exibe os dados do livro entregue
		cout.width(2); cout.fill('0'); cout << a->d_emps.mes << "/";
		cout << a->d_emps.ano << " ";
		locale br("");
		cout.imbue(br);
		cout << "-> R$" << ((operator-(a->d_devs,a->d_emps))*float(0.8)); // calcula o preco da multa do livro em específico
		cout << endl;
}


