//Paulo Roberto Fernandes Holanda
#include <iostream>
#include<string>
using namespace std;
enum tipo { JPG, PNG, BMP };
struct Imagem {
	char nome[15];
	int altura;
	int largura;
	tipo Tipo;
};
void Detalhes(Imagem a);
int main() {
	Imagem img{ "backg.png", 1920, 1080, PNG };
	system("chcp 1252 > nul");
	Detalhes(img);
}

void Detalhes(Imagem a){
	switch (a.Tipo){
	case 0:
		cout << "A imagem " << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato JPG";
		break;
	case 1:
		cout << "A imagem " << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato PNG";
		break;
	case 2:
		cout << "A imagem " << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato      BMP";
		break;
	}

}