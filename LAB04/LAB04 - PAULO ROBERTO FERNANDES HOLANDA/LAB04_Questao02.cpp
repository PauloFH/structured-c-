//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double ag, sen;
int main() {
	system("chcp 1252 > nul");

	cout << "digite um ângulo: ";
	cin >> ag;
	ag = ag*3.14159 / 180;
	sen = sin(ag);
	cout << "Seno = " << sen;
}