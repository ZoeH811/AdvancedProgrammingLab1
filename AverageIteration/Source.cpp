#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	int numProcessed = 0;
	double sum = 0.0;
	double value;

	cout << "Enter values to be averaged (non-numeric or letter to end): " << endl;

	while (true)
	{
		if (!(cin >> value)) {
			break;
		}
		if (value < 0) {
			cout << "Negative value encountered, stopping input." << endl;
			break;
		}
		sum += value;
		++numProcessed;
	}
	cin.clear();
	if (numProcessed > 0)
	{
		double average = sum / numProcessed;
		cout << "Average :" << average << endl;
	} else {
		cout << "No values were processed." << endl;
	}
}