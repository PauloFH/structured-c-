//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
    int x, soma{}, cont{};
    for (cont = 1; cont < 1000; cont++) {
        if (((cont % 3) == 0) || ((cont % 5) == 0)) {
            soma += cont;
        }
    }
    cout << soma;
}