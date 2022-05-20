//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;
int main() {
	system("chcp 1252 > nul");//	_____________________________
	int a, b, c;//					|	|	a	|	b	|	c	|
	//								|---|-------|-------|-------|
a = 1 + 2; //						|1	|	3	|	*	|	*	|
b = 1 + a; //						|2	|	3	|	4	|	*	|
c = 1 % 5; //						|3	|	3	|	4	|	1	|
a = a + 2; //						|4	|	5	|	4	|	1	|
b = a - b; //						|5	|	5	|	1	|	1	|
b = 5 * c / 2;//					|6	|	5	|	2	|	1	|
 //									|___|_______|_______|_______|

	return 0;
}