//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

double product(double first, double second, double third);

int main() {
	system("chcp 1252 > nul");
	double vector[3];
	cout << "entre com os valores do vetor: ";
	cin >> vector[0] >> vector[1] >> vector[2];
	cout << product(vector[0], vector[1], vector[2]);

}

double product(double first, double second, double third){
	double temp;	
	temp = first * (third - second);		
	return temp;
}
