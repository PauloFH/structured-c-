#include <iostream>
using namespace std;
int main()
{
    int total = 6;     // declara uma vari�vel
    int* ptr;         // declara um ponteiro

    ptr = &total;      // atribui endere�o de total

    cout << "Conte�do de total  = " << total << endl;
    cout << "Conte�do apontado  = " << *ptr << endl;

    cout << "Endere�o de total  = " << &total << endl;
    cout << "Conte�do de ptr    = " << ptr << endl;

    *ptr = *ptr + 1;     // altera valor
    cout << "Agora total vale = " << total << endl;
}
