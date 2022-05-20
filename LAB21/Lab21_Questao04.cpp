//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");    int ct{}, tt{ 1 };
    unsigned long long sm{};
    while (ct < 4000000) {
        ct += tt;
        sm = ct;
        if (sm % 2 == 0) {
            cout << sm << " ";
        }
        tt += ct;
    }
}