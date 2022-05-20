//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
int main() {
	system("chcp 1252 > nul");
	cout << left; cout.width(15); cout << "Produto";
	cout << left; cout.width(15); cout << "Preço/Kg "; 
	cout.width(15); cout << " Pedido(KG) ";
	cout.width(15); cout << "Total Parcial" << endl;
	cout << left; cout.width(15); cout << "--------";
	cout << left; cout.width(15); cout << "---------"; 
	cout.width(15); cout << "-----------";
	cout.width(15); cout << "--------------" << endl;
	cout << left; cout.width(15); cout << "Alface";
	cout << left; cout.width(15); cout << "R$ 1,25/KG"; 
	cout.width(15); cout << "3,2Kg";
	cout.width(15); cout << "R$ 4,00" << endl;
	cout << left; cout.width(15); cout << "Beterraba";
	cout << left; cout.width(15); cout << "R$ 0,65/Kg"; 
	cout.width(15); cout << "6,0Kg";
	cout.width(15); cout << "R$ 3,90" << endl;
	cout << left; cout.width(15); cout << "Cenoura";
	cout << left; cout.width(15); cout << "R$ 0,90/Kg"; 
	cout.width(15); cout << "10Kg";
	cout.width(15); cout << "R$ 9,00" << endl;

}