// CalcMedia.cpp � calcula a m�dia das avalia��es
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, n4, media, mediafinal;
	cout << "Calculando a m�dia" << endl;
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
	if (media < 7.0) {  //se a nota da m�dia for menor que 7
		cout << "Voc� foi para a recupera��o, digite a nota da prova 4 :"; // inserir nota da recupera��o (4� prova)
		cin >> n4;
		mediafinal = (media + n4) / 2; // calculo da m�dia final 
	if (mediafinal < 7) {					//caso a nota da m�dia final ainda seja abaixo de 7 
		cout << "Aluno Reprovado!! :( com nota: " <<mediafinal;

	}
	else { // caso tenha recuperado a nota
		cout << "Aluno Aprovado!! :) com nota: " <<mediafinal;
	}
	}
	else { // caso tenha tido nota suficiente para passar sem recupera��o
		cout << "Aluno Aprovado com m�dia das notas: " << media;
	}

	cout << endl;
	return 0;
}