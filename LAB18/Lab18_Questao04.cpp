//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstring>
using namespace std;


int main() {
	system("chcp 1252 > nul");
	char frs[60]{},tmp[60]{}, cpy[60]{};
	int cnt{};
	cout << "Digite uma frase: ";
	cin.getline(frs, 60);
	for (int i{};i < strlen(frs); i++) {
		if (frs[i] != ' ') {
			tmp[cnt++] = frs[i];
			
		}
	}
	int i{};
	for (int j =  (int)(strlen(tmp)-1); j >= 0; j--) {
		cpy[i] = tmp[j];
		++i;
	}
	if (strcmp(tmp,cpy) == 0) {
		cout << tmp << " ao inverso fica " << cpy << ". \n Essa frase é um palíndromo";
	}
	else {
		cout << tmp << " ao inverso fica " << cpy << ". \n Essa frase não é um palíndromo";
	}

}
