//Paulo Roberto Fernandes Holanda
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	const int size =  20 ;
	char chrismas[] = "Natal", Date1[size]={}, Date2[size]={}, Date3[size]={};

	unsigned short control[4]{ 0 };
	system("chcp 1252 > nul");
	cout << "Quais suas datas comemorativas preferidas?" <<endl;
	cin.getline(Date1, size);
	cin.getline(Date2, size);
	cin.getline(Date3, size);

	for (int i = 0; i <= sizeof(chrismas); i++) {
		if (Date1[i] != char('\0')) {
			if (Date1[i] == chrismas[i]) {
				control[0] += 1;
			}
		}
		if (Date2[i] != char('\0')) {
			if (Date2[i] == chrismas[i]) {
				control[1] +=1;
			}
		}
		if (Date3[i] != char('\0')) {
			if (Date3[i] == chrismas[i]) {
				control[2] += 1;
			}
		}
	}

	cout << Date1 << ", " << Date2 << " e " << Date3 << " são belas festas" << endl;

	for (int i = 0; i <= 3; i++) {
		if (control[i] == strlen(chrismas) && control[3] == 0) {
			cout << "O Natal também é uma das minhas datas preferidas!";
			control[3]+= 1;
		}
	}
}