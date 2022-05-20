//Paulo Roberto Fernandes Holanda
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <random>
#include<cstring>
using namespace std;

enum alimento {Sopa, Canja};
struct Tigela {
	char estado[6];
	alimento alimento;
};

void Fome(char* a);

int main() {
	system("chcp 1252 > nul");
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 2);
	int dice_roll = distribution(generator);
	Tigela prato{"Cheia", dice_roll};
	char alchar[6];
	char* temp = prato.estado;
	if (prato.alimento == 1) {
		strcpy(alchar, "Canja");
	}
	else {
		strcpy(alchar, "Sopa");
	}
	cout << "A janta de hoje é " << alchar << " e o prato está bastante " << prato.estado << endl;
	Fome(temp);
	cout << "Acabou a janta! \n O jantar de Hoje foi: "<<alchar;
	cout << " e a tijela está " << temp;
}
void Fome(char* a) {
	strcpy(a, "Vazia");
};