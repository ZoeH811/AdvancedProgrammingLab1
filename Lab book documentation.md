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

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

I have learnt that the 'Debug' mode is used to help find and fix problems whereas the 'Release' mode is used for the delivery of the final version of the program. My knowledge has improved through understanding how Visual Studio manages different build configurations.

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
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "Temperature in Celsius: " << celsius << endl;

}
```

**Test data:**

| Test Fahrenheit  |  Expected Output |  Actual Output |
|---|---|---|
| 40  |  4.4444 |   | 
|  81 |  27.2222 |   |
|  5 | -15  |   | 

**Sample output:**

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

I have learnt how to use basic c++ to create a simple program to calculate the temperature in celcius from fahrenheit.

### Q3. Types

**Question:**

Using the “Hello World” program as a starting point, write a program that prints out the size in bytes of each of the fundamental data types in C++.
Remember to include both the signed and unsigned versions of each data type.

**Solution:**

```c++
#include <iostream>

int main(int, char**) {
   std::cout << "Hello World" << std::endl;
   return 0;
}
```

**Sample output:**

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

I have learnt how to use the sizeof operator to determine the size of different fundamental data types. Furthermore, my knowledge has improved through understanding the differences between signed and unsigned data types and additionally the size of the fundamental data types in bytes.

### Q4. Floating point precision

**Question:**

Understanding logic of the precision of floating point numbers within C++

**Solution:**

```c++
#include <iostream>

int main(int, char**) {
   std::cout << "Hello World" << std::endl;
   return 0;
}
```

**Sample output:**

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

Rounding errors can occur and therefore when using floating point values within mathmatical equations a resulting value can not be said to be mathmatically equal.

**Questions:**

*Is there anything you would like to ask?*

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

int main(int, char**) {
   std::cout << "Hello World" << std::endl;
   return 0;
}
```

**Test data:**

*Delete if not required.*

**Sample output:**

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

**Questions:**

*Is there anything you would like to ask?*

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

| Test Values  |  Expected Output |  Actual Output |
|---|---|---|
| 1, 2, 3, -4  |  X |   | 
|  1, 2, 3, a |  X |   |
|  5, 10, 5, 20, -5 | X  |   | 

**Sample output:**

*Delete if not required.*

**Reflection:**

*Reflect on what you have learnt from this exercise. Did you make any mistakes? In what way has your knowledge improved?*

**Questions:**

*Is there anything you would like to ask?*
