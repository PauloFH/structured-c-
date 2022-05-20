//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
    float preco{};
    int cod;
    cout << "Qual o pre�o do produto pedido?";
    cin >> preco;
    cout << "Qual o c�digo do seu produto?";
    cin >> cod;
    switch (cod)
    {
    case 1:
    case 2:cout << "C�digo de origem do sul" << endl;
        break;
     case 3:cout << "C�digo de origem do Norte" << endl;
        break;
    case 4:cout << "C�digo de origem do Centro-Oeste" << endl;
        break;
    case 5:
    case 6:cout << "C�digo de origem do Nordeste" << endl;
        break;
    case 7:
    case 8:
    case 9:cout << "C�digo de origem do Sudeste" << endl;
        break;
    default: 
        cout << "C�digo inv�lido!" << endl;
        break;
    }
}