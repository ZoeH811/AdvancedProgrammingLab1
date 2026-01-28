#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	const double x = 100000.123456789;
	const double a = 200000.123456789;
	double y = (x + a) / x;
	cout << "y = " << y << endl;
	double z = x / y;
	// double z = 1.0 + (a / x);
	cout << "z = " << z << endl;
	if (y == z)
		cout << "y and z are identical" << endl;
}