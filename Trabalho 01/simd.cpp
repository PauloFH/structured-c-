#include "simd.h"

unsigned int Armazena(unsigned char a, unsigned char b, unsigned char c, unsigned char d) {
	unsigned int bit32 = 0;
	//crio uma variável que vai receber os 4 valores um ao lado do outro e passo eles usando soma logica;
	bit32 = (int)d | (int)(c << 8) | (int)(b << 16) | (int)(a << 24);

	return bit32;
}

unsigned char Primeiro(unsigned int a) {
	//localiza o primeiro valor dentro da variável de 32 bits e devolve ele
	unsigned char b;
	int temp;
	temp = (a>> 24 );
	b = temp;
	return b;
}

unsigned char Segundo(unsigned int a) {
	//localiza o segundo valor dentro da variável de 32 bits e devolve ele
	unsigned char b;
	unsigned int temp;
	temp = (a >> 16);
	b = temp;
	return b;
}
unsigned char Terceiro(unsigned int a) {
	//localiza o terceiro valor dentro da variável de 32 bits e devolve ele
	unsigned char b;
	unsigned int temp;
	temp = (a >> 8);
	b = temp;
	return b;
}

unsigned char Quarto(unsigned int a) {
	//localiza o quarto valor dentro da variável de 32 bits e devolve ele
	unsigned char b;
	unsigned int temp;
	temp = a;
	b = temp;
	return b;
}

unsigned int Soma(unsigned int a, unsigned int b) {
	//Soma cada valor dos 32 bits individualmente e depois insere em outra variável de 32bits
	unsigned char c, d, e , f;
	unsigned int saida;
	c = Primeiro(a) + Primeiro(b);
	d = Segundo(a) + Segundo(b);
	e = Terceiro(a) + Terceiro(b);
	f = Quarto(a) + Quarto(b);
	saida = Armazena(c, d, e, f);
		return saida;
}

unsigned int Mult(unsigned int a, unsigned int b) {
	//Multiplicação cada valor dos 32 bits individualmente e depois insere em outra variável de 32bits
	unsigned char c, d, e, f;
	unsigned int saida;
	c = Primeiro(a) * Primeiro(b);
	d = Segundo(a) * Segundo(b);
	e = Terceiro(a) * Terceiro(b);
	f = Quarto(a) * Quarto(b);
	saida = Armazena(c, d, e, f);
	return saida;
}