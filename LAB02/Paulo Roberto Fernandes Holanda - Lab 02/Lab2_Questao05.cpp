//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main(int argc, char** argv){
	string centro;
	centro = argv[1];
	if (centro == "notepad"){
		system("notepad");
	}
	else{
		if (centro == "mspaint") {
			system("mspaint");
		}
		else{
			if (centro == "calc") {
				system("calc");
			}
		}
	}
	return 0;
}