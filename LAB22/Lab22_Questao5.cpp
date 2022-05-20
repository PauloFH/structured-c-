//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
    int escolha{};
    float a1{}, a2{}, s1{}, s2{}, m1{}, m2{}, d1{}, d2{};
    char continuar{'S'};
    cout << "Mincalculadora" << endl
        << "----------------" << endl
        << "1) Adi��o" << endl
        << "2) Subtra��o" << endl
        << "3) Multiplica��o" << endl
        << "4) Divis�o" << endl;
    while (continuar == 'S') {
        cout << "Escolha uma oper��o para ser efetuada:";
        cin >> escolha;
        switch (escolha)
        {
        case 1:  cout << "Calculadora de adi��o, Insira dois valores:";
            cin >> a1 >> a2;
            a1 += a2;
            cout << "Soma:" << a1 << endl;
            break;
        case 2:  cout << "Calculadora de subtra��o, Insira dois valores:";
            cin >> s1 >> s2;
            s1 -= s2;
            cout << "Subtra��o:" << s1 << endl;
            break;
        case 3:  cout << "Calculadora de multiplica��o, Insira dois valores:";
            cin >> m1 >> m2;
            m1 *= m2;
            cout << "Multiplica��o:" << m1 << endl;
            break;
        case 4:  cout << "Calculadora de divis�o, Insira dois valores:";
            cin >> d1 >> d2;
            d1 /= d2;
            cout << "Divis�o:" << d1 << endl;
            break;
        default: cout << "Op��o inv�lida!" << endl;
        }
        cout << "Deseja realizar outra opera��o:(S para sim e N para n�o)";
        cin >> continuar;
    }
}

