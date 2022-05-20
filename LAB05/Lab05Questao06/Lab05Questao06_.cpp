//Paulo Roberto Fernandes Holanda
#include <cmath>
double tt(double y, double x) {
	double vv;
#define PI 3.14159265
	vv = atan2(y, x) * (180 / PI);
	return vv;

}
double vet(int x, int y){
	double a, b, v;
	a = pow(x, 2);
	b = pow(y, 2);
	v = sqrt(a + b);
	return v;
}