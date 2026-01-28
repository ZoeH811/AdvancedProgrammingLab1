#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	float fahrenheit;
	float celsius;
	cout << "Enter temperature in Fahrenheit: " << endl;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "Temperature in Celsius: " << celsius << endl;

}