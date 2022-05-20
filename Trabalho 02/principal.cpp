//Paulo Roberto Fernandes Holanda
#include "biblioteca.h"
#include <locale.h>


int main() {
	system("chcp 1252 > nul"); 
	int devs{}, atraso{};
	float multa{}, multa_T{};
	cout << "Qual o número de devoluções para hoje? "; 
	cin >> devs; // Recebe as devoluções realizadas no dia;
	devolucao * dev_liv = new devolucao[devs]{};//criação de um vetor dinâmico

	cout << "Qual a data de devolução: ";
	cin >> dev_liv[0].d_devs.dia;//armazena a devolução
	cin >> dev_liv[0].d_devs.barra;
	cin >> dev_liv[0].d_devs.mes;
	cin >> dev_liv[0].d_devs.barra;
	cin >> dev_liv[0].d_devs.ano;
	for (int i{}; i < devs;i++) {
		dev_liv[i].d_devs.dia = dev_liv[0].d_devs.dia;
		dev_liv[i].d_devs.mes = dev_liv[0].d_devs.mes;
		dev_liv[i].d_devs.ano = dev_liv[0].d_devs.ano;
	}//Recebe a data de devolução dos livros naquele dia;
	
	linha('-', 42);
	
	int cnt{}, x{ 1 }, size{ devs - 1 };
	for (int i{}; i < devs; i++) {
		cout << "Aluno "; cout << right; cout.width(7); cout << ": ";
		cin >> dev_liv[i].mat_aluno; // Recebe a matricula do Aluno que pegou o livro emprestado
		cout << "Livro "; cout << right; cout.width(7); cout << ": ";
		cin >> dev_liv[i].id_livro;// Recebe iddo livro que o Aluno que pegou emprestado
		cout << "Empréstimo : "; // Dia que pegou emprestado
		cin >> dev_liv[i].d_emps.dia;
		cin >> dev_liv[i].d_emps.barra; 
		cin >> dev_liv[i].d_emps.mes;
		cin >> dev_liv[i].d_emps.barra;
		cin >> dev_liv[i].d_emps.ano;
		//calcula o atraso de tempo(distancia entre os dois dias menos 3)
		atraso = operator-(dev_liv[i].d_devs, dev_liv[i].d_emps);
		cout << "Atraso "; cout << right; cout.width(6); cout << ": ";
		cout << atraso << " dia(s)" << endl;
		locale br("");// coloca virgula no lugar dos pontos nos float
		cout.imbue(br);
		multa = (atraso * float(0.8)); cout << fixed;cout.precision(2);//calcula a multa(quantidade de atraso vezes 0.8)
		cout << "Multa "; cout << right; cout.width(7); cout << ": ";
		cout << "R$" << multa << endl;
		
		while ((cnt < (size)) && (x > 0)) {
		linha('-', 34);
		cnt++;
		x--;
		}
		x++;
	}

	linha('-', 42);
	
	const int mes = dev_liv[0].d_devs.mes;//armazena o mês da devolução
	const char meses[13][30]{//matriz de constante char armazenando os meses
 		{},
		{"Janeiro"},
		{"Fevereiro"},
		{"Março"},
		{"Abril"},
		{"Maio"},
		{"Junho"},
		{"Julho"},
		{"Agosto"},
		{"Setembro"},
		{"Outubro"},
		{"Novembro"},
		{"Dezembro"} };

	locale C("C");
	cout.imbue(C);
	
	cout << "Resumo do dia ";// exibição do resumo do dia
	cout.width(2); cout.fill('0'); cout << dev_liv->d_devs.dia;
	cout << " de " << meses[mes];
	cout << " de " << dev_liv->d_devs.ano;
	cout << endl<< endl;
	for (int z{}; z <devs; z++) {
		exibir(&dev_liv[z]);// exibe os dados dos livros entregues no dia
	}
	cout << endl;
	locale br("");
	cout.imbue(br);
	multa_T = multat(dev_liv, devs, dev_liv[0].d_devs);//calcula as multas de todos os livros entregues no dia e depois soma todas
	cout << "Total em multas: R$" <<multa_T<<endl;
	linha('-', 42);
	cout << "Encerrando programa..."; // Indicar a finalização do programa
	delete[] dev_liv;
}
