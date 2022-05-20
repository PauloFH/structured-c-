//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
    bool passe{};
    unsigned long long ct{}, j{}, i{ 1 };
    while (passe != true) {
        for (j = 1; j <= 20; j++) {
            if (i % j == 0) {
                ct += 1;
            }
        }
        if (ct == 20) {
            passe = true;
        }
        else {
            ct = 0;
        }
        j = 0;
        i++;
    }
    cout << i;
}