//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
		unsigned short x = 1;
		x = x + 32767;
	cout << "x = " << x << std::endl;
		unsigned int y = 2'147'483'647;
		y = y + 1;
	cout << "y = " << y << std::endl;
}