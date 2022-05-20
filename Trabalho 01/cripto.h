#include <random>
unsigned long long Codificar(unsigned int a);
/*transforma um valor de 32 bits em outro, alterando 6 posi��es aleat�rias da cadeia original.
 Se o bit testado estiver ligado (igual a 1), ele deve ser desligado (para zero), e vice-versa.
											 */
unsigned int Decodificar(unsigned long long a);
/*
Decodificar: recebe um valor de 64 bits, gerado pela fun��o codificar, e retorna um valor de
32 bits com o valor original, decodificado a partir do valor armazenado nos primeiros 32 bits
e das 6 posi��es indicadas nos 32 bits seguintes.
*/

//recebe um valor de 32 bits e a posi��o do bit a ser ligado e retorna o valor de 32 bits resultante da modifica��o do bit.
unsigned int LigarBit(unsigned int a, int c);

//recebe um valor de 32 bits e a posi��o do bit a ser desligado e retorna o valor de 32 bits resultante da modifica��o do bit.
unsigned int DesligarBit(unsigned int a, int c);

//recebe um valor de 32 bits e a posi��o do bit a ser testado, retornando um booleano (true ou false) para indicar se o bit est� ou n�o ligado.
bool TestarBit(unsigned int a, int c);

// retornam o valor aleat�rio inserido na vari�vel de 32 bits
unsigned int aleatorio1(unsigned long long a);
unsigned int aleatorio2(unsigned long long a);
unsigned int aleatorio3(unsigned long long a);
unsigned int aleatorio4(unsigned long long a);
unsigned int aleatorio5(unsigned long long a);
unsigned int aleatorio6(unsigned long long a);