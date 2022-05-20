//Paulo Roberto Fernandes Holanda
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	float scores[3], values[3] = {2,3,4}, total_old, total_new;
	cout << "quais foram as suas notas: ";
	cin >> scores[0] >> scores[1] >> scores[2];
	
	total_old = ((scores[0] * values[0]) + (scores[1] * values[1]) + (scores[2] * values[2])) / 9;
	total_new = (scores[0] + scores[1] + scores[2]) / 3;
	cout << "Media antiga: " << total_old << endl;
	cout << "Media nova: " << total_new << endl;
}