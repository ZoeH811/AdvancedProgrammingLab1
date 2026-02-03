# 500083 Lab Book

## Week 1 - Lab A (28/01/26)

### Q1. Hello World

**Question:**

Locate the Solution Explorer within Visual Studio and select the 'HelloWorld' project.
Right click on this project and select Build. This should compile and link the project.
Now run the 'HelloWorld' program.
Change between Debug and Release mode. Compile again and rerun the program.

**Solution:**

```c++
#include <iostream>

int main(int, char**) {
   std::cout << "Hello World" << std::endl;
   return 0;
}
```

**Sample output:**

<img width="316" height="98" alt="image" src="https://github.com/user-attachments/assets/c90a4994-ba59-494a-a2c5-8469a85db106" />

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

Through the completion of this exercise I have learnt that the 'Debug' mode is used to help find and fix problems without the use of optimisations whereas the 'Release' mode is used for the delivery of the final version of the program with optimisations turned on. It allowes for improved performance in the final product although the output should be the same. My knowledge overall has improved through understanding how Visual Studio manages different build configurations.

### Q2. Creating a new project

**Question:**

Create a new Empty C++ Console project called Temperature by using the project application wizard.
Create a new cpp file within the temperature project by right clicking on the Temperature project in the Solution Explorer Window and select Add » Add New Item.
Write a program to input a Fahrenheit measurement, convert it and output a Celsius value. 

**Solution:**

```c++
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
```

**Test data:**

| Test Fahrenheit  |  Expected Output |  Actual Output | Pass/Fail |
|---|---|---|---|
| 40  |  4.4444 | 4.4444  | Pass |
|  81 |  27.2222 |  27.2222 | Pass |
|  5 | -15  | -15  | Pass |

**Sample output:**

<img width="401" height="76" alt="image" src="https://github.com/user-attachments/assets/91971a30-52c3-4982-bb41-c47764ff41fb" />

**Reflection:**

Through the completion of this exercise I have learnt how to use basic c++ to create a simple program to calculate the temperature in celcius from fahrenheit. It has improved my knowledge as it has helped me understand how integer division works in c++ (5/9 result is truncated with loss of precision). I have therefore chose the appropriate data type when performing the calculations (floating point values).

### Q3. Types

**Question:**

Using the “Hello World” program as a starting point, write a program that prints out the size in bytes of each of the fundamental data types in C++. Remembering to include both the signed and unsigned versions of each data type.

**Solution:**

```c++
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
```

**Sample output:**

<img width="479" height="644" alt="image" src="https://github.com/user-attachments/assets/a2c9e2d3-111b-4c37-b02b-73c73d9b57aa" />

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

Through the completion of this exercise I have a clearer understanding of the fundamental data types in C++ and the memory in which each one requires. Through using the sizeof operator I observed the variations in memory requirements. Notibly, some signed and unsigned versions of integer types used the same amount of memory but they differ in the range of values that they represent. Overall, this task highlighted the importance of selecting the appropriate data types to ensure efficient memory usage.

### Q4. Floating point precision

**Question:**

Understanding logic of the precision of floating point numbers within C++

In the lectures we discussed the precision of floating point numbers within C++, and how due to this precision the equality operator was unreliable.

Write a simple program that includes the lines:
```c++
double x = 10.0;
double y = 10.0;
if (x == y)
      cout << “X and Y are identical” << endl;
```

Did the program execute as expected?

Now try y = 20.0  / 2.0 and execute the program again.
Then try a more complex calculation for y e.g.

```c++
const double x = 100000.123456789;
const double a = 200000.123456789;
double y = (x + a) / x;
double z = 1.0 + (a / x);
if (y == z) 
   cout << “y and z are identical” << endl;
```

Now try different values for x and a

Printing out the values of x, y and z, may be useful in helping you form an opinion of what is happening.

Once you’re confident you understand the logic, investigate:

double z = x / y;

How small does y have to be before you get a “divide by zero” error? Does the value of x affect the result?

**Solution:**

```c++
#include <iostream>
using namespace std;

int main (int argc, char **argv) {

	const double x = 100000.123456789;
	const double a = 200000.123456789;

	double y = (x + a) / x;

	//double y = 1e-1;   // 0.1
	//double y = 1e-5;   // 0.00001
	//double y = 1e-10;  // 0.0000000001
	//double y = 1e-500; // extremely small
	//double y = 0.0f; // zero

	cout << "y = " << y << endl;
	double z = 1.0 + (a / x);
	cout << "z = " << z << endl;

	const double epsilon = 1e-9;
	
	if (abs(y - z) < epsilon)
		cout << "y and z are identical" << endl;

	double result = x / y;
	cout << "result = " << result << endl;
}
```

**Sample output:**

Part A:
<img width="272" height="107" alt="image" src="https://github.com/user-attachments/assets/af254b0c-df12-4e60-87c0-26d662d893ad" />

Part B:
<img width="644" height="130" alt="image" src="https://github.com/user-attachments/assets/5ad422d1-1e72-4d11-98e4-e491b7e71e1d" />

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

Through the completion of this exercise I have learnt that floating point values have limited precision. This means that during mathmatical operations when rounding occurs at each step along with the order of operations being important tiny errors can accumulate. Even though in the example they are both mathmatically equal they may differ by a very small amount. A key take away from this exercise is that floating point values should not be compared using '==' instead comparisons should allow for a small tolerance (use of epsilon). Furthermore investigating division using very small values highlighted how floating point arithmetic can product infinity or undefined results instead of immediate errors.

### Q5. C#/C++ Iteration Comparison (for loop)

**Question:**

Port the below C# code in to C++ using the provided Main.cpp file.

```c#
static void Main(string[] args)
{
   int factorialNumber = 5;
   int factorialTotal = 1;

   for(int n = 2; n <= factorialNumber; ++n)
   {
      factorialTotal *= n;
   }

   System.Console.WriteLine(factorialTotal);
}
```

**Solution:**

```c++
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
```

**Sample output:**

<img width="307" height="93" alt="image" src="https://github.com/user-attachments/assets/20889ec6-952d-48f8-886e-807613a27e63" />

**Reflection:**

Through the completion of this exercise I have learnt the simple yet notible syntax and semantic differences between C# and C++ code such as 'Console.WriteLine' vs 'cout'.

### Q6. Calculate Average using Iteration (while loop)

**Question:**

Using a while loop (or do-while loop), calculate the average value of values provided by the user from the console (cin). You should calculate the average after the user either enters a negative number or the user enters a non-number value (e.g. a letter).

**Solution:**

```c++
#include <iostream>

int main(int, char**) {
   std::cout << "Hello World" << std::endl;
   return 0;
}
```

**Test data:**

| Test Values  |  Expected Output |  Actual Output | Pass/Fail |
|---|---|---|
| 1, 2, 3, -4  |  2 | 2  | Pass |
|  1, 2, 3, a |  2 |  2 | Pass |
|  5, 5, 5, -5 | 3  |  3 | Pass | 

**Sample output:**

<img width="718" height="178" alt="image" src="https://github.com/user-attachments/assets/b0413e41-1fba-4660-841f-aeb0550e7c37" />

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

**Questions:**

Through the completion of this exercise I learnt how to use loops and if statements using the C++ syntax. I used a 'while' loop to repeatedly read the users input and if statements to control the iterations based on conditions. The 'while' loop was exited through making use of the 'break'. Furthermore this task highlighted the importance of controlling program flow with validating the user input.
