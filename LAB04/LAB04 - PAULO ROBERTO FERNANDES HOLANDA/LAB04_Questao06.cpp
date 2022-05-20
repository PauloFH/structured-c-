//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int inicializar();
void ligar(); 
void verificar();
void ativar();

int rd;

int main() { 

	system("chcp 1252 > nul");

	inicializar();
	cout << endl;
	if (rd > 16384 ) {
		cout << "Sistema em funcionamento";
}
	else {
		cout << "Falha na inicialização";
	}

}



int inicializar(){
	cout << "Inicializando sistema : \n";

 ligar();

 verificar();

 ativar();

 cout << "Inicialização concluída\n";
	srand(time(NULL));
	rd = rand();
 return rd;
}

void ligar() {
	cout << "- Ligando dispositivos\n";
}

void verificar() {
	cout << "- Verificando integridade\n";
}

void ativar() {
	cout << "- Ativando processos\n";
}