//Kevin Thomas CS1A Chapter 2, P. 109, #5
//
/**************************************************************
*
* Average of Values
* ____________________________________________________________
* This program computes average of five given values.
*
* Computation is based on the formula:
* average = (sum of all numbers) / number of numbers
* ____________________________________________________________
* INPUT
* num1: 28
* num2: 32
* num3: 37
* num4: 24
* num5: 33
*
* OUTPUT
* average : average of the five numbers
*
**************************************************************/

#include <iostream>
using namespace std;

int main() {
	//Initialze the five input numbers
	int num1 = 28;
	int num2 = 32;
	int num3 = 37;
	int num4 = 24;
	int num5 = 33;
	//Calculate the sum
	float sum = num1 + num2 + num3 + num4 + num5;
	//Calculate the average and store it inside of a float variable
	float average = sum / 5;
	//Output the average
	cout << average;
	return 0;
}
