//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
     int num{}, ctl{};

    do{
        cout << "insira um número maior que 0: ";
        cin >> num;
    } while (num < 0);

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            ctl++;

    if (ctl == 2)
        cout << "o número " <<num << " é primo" << endl;
    else
        cout << "o número " << num << " não é primo" << endl;
    return 0;
}