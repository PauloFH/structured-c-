//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

void exibir(int* a);

int main() {
	system("chcp 1252 > nul");
	int mat[2][3] =
	{
	{1,2,3},
	{4,5,6}
	};
	exibir(mat[0]);
}

void exibir(int* a){
	cout << a;
}
