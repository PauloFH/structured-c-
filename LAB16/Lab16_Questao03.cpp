//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int A[10] = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};

	for (int i = 0; i < 5; i++) {
		int* pnt1 = (A+i);
		int* pnt2 = ((A + 1)+i);
		cout << " [" << *(pnt1 + i) << ", " << *(pnt2+i) << "]";
	}
}