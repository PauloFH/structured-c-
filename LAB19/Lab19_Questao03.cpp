//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

int mat[2][3] =
{
{1,2,3},
{4,5,6}};
cout << mat[0][0] << endl; //primeiro termo
cout << mat[0] << endl;// endereço do primeiro termo do primeiro vetor
cout << &mat[0][0] << endl; //endereço do primeiro termo do primeiro vetor
}