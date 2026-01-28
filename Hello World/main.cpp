#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	cout << "Hello World" << endl;

	cout << "Bite size of Integer types:" << endl;

	cout << "short: " << sizeof(short) << " byte(s)" << endl;
	cout << "short: " << sizeof(unsigned short) << " byte(s)" << endl;
	cout << "int: " << sizeof(int) << " byte(s)" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
	cout << "long: " << sizeof(long) << " byte(s)" << endl;
	cout << "unsigned long: " << sizeof(unsigned long) << " byte(s)" << endl;

	cout << "Bite size of Floating-point types:" << endl;

	cout << "float: " << sizeof(float) << " byte(s)" << endl;
	cout << "double: " << sizeof(double) << " byte(s)" << endl;

	cout << "Bite size of Character types:" << endl;

	cout << "char: " << sizeof(char) << " byte(s)" << endl;
	cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;

	return 0;
}