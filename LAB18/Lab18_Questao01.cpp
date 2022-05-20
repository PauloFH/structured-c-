//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int i = 0;
	while (++i < 4)//Vai exibir OI! 3 vezes i= (1,2,3);
		cout << "Oi! ";
	//Vai exibir uma vez o Tchau! e depois verifica se tem q ser repitido novamente i =(4,5,6,7,8);
	do
		cout << "Tchau! ";
	while (i++ <= 8);

}