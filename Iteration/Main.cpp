#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int factorialNum = 5;
	int factorialTotal = 1;

	for (int i = 1; i <= factorialNum; ++i)
	{
		factorialTotal *= i;
	}
	cout << "Factorial of " << factorialNum << " is " << factorialTotal << endl;
}