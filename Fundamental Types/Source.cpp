#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	cout << "Size of Fundamental types:" << endl << endl;

	cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl << endl;

	cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
	cout << "Size of char16_t: " << sizeof(char16_t) << " byte(s)" << endl;
	cout << "Size of char32_t: " << sizeof(char32_t) << " byte(s)" << endl;
	cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
	cout << "Size of signed char: " << sizeof(signed char) << " byte(s)" << endl << endl;

	cout << "Size of signed int: " << sizeof(int) << " byte(s)" << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl << endl;

	cout << "Size of signed short: " << sizeof(short) << " byte(s)" << endl;
	cout << "Size of unsigned short: " << sizeof(unsigned short) << " byte(s)" << endl << endl;

	cout << "Size of signed long: " << sizeof(long int) << " byte(s)" << endl;
	cout << "Size of unsigned long: " << sizeof(unsigned long int) << " byte(s)" << endl << endl;

	cout << "Size of signed long long: " << sizeof(long long) << " byte(s)" << endl;
	cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " byte(s)" << endl << endl;

	cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
	cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
	cout << "Size of long double: " << sizeof(long double) << " byte(s)" << endl << endl;
	
	return 0;
}