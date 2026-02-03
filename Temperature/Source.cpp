#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	float fahrenheit;
	float celsius;

	cout << "Enter temperature in Fahrenheit: " << endl;
	cin >> fahrenheit;

	celsius = (5.0f / 9.0f) * (fahrenheit - 32);	

	cout << "Temperature in Celsius: " << celsius << endl;

	return 0;
}