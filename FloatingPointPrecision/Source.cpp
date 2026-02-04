#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	const double x = 100000.123456789;
	const double a = 200000.123456789;

	//double y = (x + a) / x;

	//double y = 1e-1;   // 0.1
	//double y = 1e-5;   // 0.00001
	//double y = 1e-10;  // 0.0000000001
	double y = 1e-500; // extremely small
	//double y = 0.0f; // zero

	cout << "y = " << y << endl;
	double z = 1.0 + (a / x);
	cout << "z = " << z << endl;

	const double epsilon = 1e-9;
	
	if (fabs(y - z) < epsilon)
		cout << "y and z are identical" << endl;

	double result = x / y;
	cout << "result = " << result << endl;
}