#include <iostream>
using namespace std;
int main()
{
    int total = 6;     // declara uma variável
    int* ptr;         // declara um ponteiro

    ptr = &total;      // atribui endereço de total

    cout << "Conteúdo de total  = " << total << endl;
    cout << "Conteúdo apontado  = " << *ptr << endl;

    cout << "Endereço de total  = " << &total << endl;
    cout << "Conteúdo de ptr    = " << ptr << endl;

    *ptr = *ptr + 1;     // altera valor
    cout << "Agora total vale = " << total << endl;
}
