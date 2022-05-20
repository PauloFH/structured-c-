// CalcMedia.cpp – calcula a média das avaliações
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, n4, media, mediafinal;
	cout << "Calculando a média" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;
	if (media < 7.0) {  //se a nota da média for menor que 7
		cout << "Você foi para a recuperação, digite a nota da prova 4 :"; // inserir nota da recuperação (4° prova)
		cin >> n4;
		mediafinal = (media + n4) / 2; // calculo da média final 
	if (mediafinal < 7) {					//caso a nota da média final ainda seja abaixo de 7 
		cout << "Aluno Reprovado!! :( com nota: " <<mediafinal;

	}
	else { // caso tenha recuperado a nota
		cout << "Aluno Aprovado!! :) com nota: " <<mediafinal;
	}
	}
	else { // caso tenha tido nota suficiente para passar sem recuperação
		cout << "Aluno Aprovado com média das notas: " << media;
	}

	cout << endl;
	return 0;
}