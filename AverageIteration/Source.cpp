#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	int numProcessed = 0;
	double sum = 0.0;
	double value;

	while (cin >> value) {
		sum += value;
		++numProcessed;
	}
	cin.clear();
	if (numProcessed > 0) {
		double average = sum / numProcessed;
		cout << "Average :" << average << endl;
	} else {
		cout << "No values were processed." << endl;
	}
}