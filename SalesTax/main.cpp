//Kevin Thomas CS1A Chapter 2, P. 109, #3
//
/**************************************************************
*
* SALES TAX
* ____________________________________________________________
* This program will compute the total sales tax on a $52 purchase, assuming that the state sales tax is 4%
* and county sales tax is 2%.
* ____________________________________________________________
* INPUT
* purchase: Integer variable storing the value 52 representing the 52 dollar purchase.
* stateTax: a float variable representing the 4% state tax.
* countyTax: a float variable representing the 2% county tax.
* OUTPUT
* totalTax: The total amount of tax that the buyer will pay.
*
**************************************************************/
#include <iostream>
using namespace std;

int main() {
	//Initialize variables for purchase price, state tax, and county Tax
	int purchase = 52;
	float stateTax = 0.04;
	float countyTax = 0.02;
	//Declare variable where the total tax amount will be stored.
	float totalTax;
	//Calculate the amount of tax that the consumer will pay
	totalTax = (purchase * stateTax) + (purchase * countyTax);
	//Print that value out
	cout << totalTax << endl;
	return 0;
}
