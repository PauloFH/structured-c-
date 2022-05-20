//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cmath>
using namespace std;

double dist, qx, qy, px, py, l1, l2; 

int main() {
	system("chcp 1252 > nul");

	cout << "Ponto P: \n";
	cin >> px;
	cin >> py;
	cout << "Ponto Q: \n";
	cin >> qx;
	cin >> qy;

	l1 = (qx - px);
		l1 =  pow( l1, 2);
	l2 = (qy - py);
	l2 = pow(l2, 2);
	dist = sqrt((l1 + l2));

	cout << "A distância entre P e Q é: " << dist;
	return 0;
}
