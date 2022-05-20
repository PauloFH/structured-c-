#include <iostream>
#include "simd.h"
#include "cripto.h"
using namespace std;


int main() {
	unsigned char valor1, valor2, valor3, valor4, valor5, valor6, valor7,valor8; //	Valores que o programa recebe para realizar as operações
	unsigned int temp, geral1, geral2, soma, multiplicacao, soma_descripto;
	/*temp = variavel descartavel que receberá os cin e mandará para os valres em unsigned char
	* geral1 & geral2 = variável em 32 bits que juntará os valores
	* soma e multiplicacao =  recebe os valores juntos*/
	unsigned int soma_codificado, multi_codificado, multi_descripto;
	unsigned long long soma_cripto, multiplicacao_cripto;
	char barra, virgula;
	// recebimento dos valores que serão trabalhados
	system("chcp 1252 > nul");
	cin >> barra >> temp >> virgula;
	valor1 = temp;
	cin >> temp >> virgula;
	valor2 = temp;
	cin >> temp >> virgula;
	valor3 = temp;
	cin >> temp >> barra;
	valor4 = temp;
	cin >> barra >> temp >> virgula;
	valor5 = temp;
	cin >> temp >> virgula;
	valor6 = temp;
	cin >> temp >> virgula;
	valor7 = temp;
	cin >> temp >> barra;
	valor8 = temp;
	cout <<endl;
	//junta os 4 valores em uma variável de 32 bits
	geral1 = Armazena(valor1, valor2, valor3, valor4);
	geral2 = Armazena(valor5, valor6, valor7, valor8);
	valor1 = valor2 = valor3 = valor4 = valor5 = valor6 = valor7 = valor8 = 0;

	// imprime os valores dos vetores antes das operações
 	cout << "Operandos em 32 bits = " << geral1 <<endl;
	cout << "Operandos em 32 bits = " << geral2 << endl << endl;	

	//faz a soma dos valores e devolve eles juntos em 32 bits
	soma = Soma(geral1, geral2);
	//faz a multiplicação dos valores e devolve eles juntos em 32 bits
	multiplicacao = Mult(geral1, geral2);

	cout << "Soma em 32 bits = " << soma << endl;
	cout << "Mult em 32 bits = " << multiplicacao << endl << endl;

	//expressa os valores idividualmente após a soma
	cout << "[";	
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Primeiro(soma) << ",";
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Segundo(soma) << ",";
	cout.width(3);
	cout.fill('0');
	cout<< (unsigned int)Terceiro(soma) << ",";
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Quarto(soma) << "]" << " = Somas" << endl;
	//expressa os valores idividualmente após a multiplicação
	cout << "[";
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Primeiro(multiplicacao) << ",";
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Segundo(multiplicacao) << ",";
	cout.width(3);
	cout.fill('0');
	cout << (unsigned int)Terceiro(multiplicacao) << ",";
	cout<< (unsigned int)Quarto(multiplicacao) << "]" << " = Multiplicações" << endl <<endl;
	
	//realiza a criptografia do resultado da soma
	soma_cripto = Codificar(soma);

	//realiza a criptografia do resultado da multiplicação
	multiplicacao_cripto = Codificar(multiplicacao);
	// exibe o valor da criptografia da soma junto com as posições mudadas em uma vairiável 64bits 
	cout << "Soma Cripto 64 bits = " << soma_cripto << endl;
	// exibe o valor da criptografia da multiplicação junto com as posições mudadas em uma vairiável 64bits 
	cout << "Mult Cripto 64 bits = " << multiplicacao_cripto << endl;
	//retorna somente os primeiros 32bits da soma criptografada
	soma_codificado = (soma_cripto >> 32);
	// retorna as posições que tiveram os bits alterados na critografia da soma
	cout << "Valor Codificado = " <<soma_codificado  << "  ";
	cout << "( " << aleatorio1(soma_cripto) << " " << aleatorio2(soma_cripto) << " " << aleatorio3(soma_cripto);
	cout << " " << aleatorio4(soma_cripto) << " " << aleatorio5(soma_cripto) << " " << aleatorio6(soma_cripto) << " )" << endl;
	// realiza a decodificação da soma
	soma_descripto = Decodificar(soma_cripto);
	// exibe a decodificação da soma
	cout << "Soma Decodificada = " << soma_descripto << endl << endl;

	multi_codificado = (multiplicacao_cripto >> 32);
	//retorna somente os primeiros 32bits da multiplicação criptografada
	cout << "Valor Codificado = " << multi_codificado << "  ";
	// retorna as posições que tiveram os bits alterados na critografia da multiplicação
	cout << "( " << aleatorio1(multiplicacao_cripto) << " " << aleatorio2(multiplicacao_cripto) << " " << aleatorio3(multiplicacao_cripto);
	cout << " " << aleatorio4(multiplicacao_cripto) << " " << aleatorio5(multiplicacao_cripto) << " " << aleatorio6(multiplicacao_cripto) << " )" << endl;
	// realiza a decodificação da multiplicação
	multi_descripto = Decodificar(multiplicacao_cripto);
	// exibe a decodificação da multiplicação
	cout << "Mult Decodificada = " << multi_descripto;

}