//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int e, s;
	double m, v,a = 1;
	system("chcp 1252 > nul");
	e = 200;
	s = 1;
	m = (a/ pow(2, 2)) + (a / pow(2, 3)) + (a / pow(2, 7)) + (a / pow(2, 9));
	v = s * (2 * (e - 127)) * (1 + m);
	cout << "O número é: " << v;
}
