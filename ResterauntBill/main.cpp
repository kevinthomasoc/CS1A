//Kevin Thomas CS1A Chapter 2, P. 109, #4
//
/**************************************************************
*
* Resteraunt Bill
* ____________________________________________________________
* This program computes the tax and tip on a resteraunt bill, and displays the meal cost, tax amount, tip
* amount, and total bill.
*
* Computation is based on the formula:
* cost after tax = meal cost * tax amount
* cost after tip = cost after tax * tip amount
* ____________________________________________________________
* INPUT
* mealCost: the cost of the meal
* tax: the amount of tax owed expressed as a deicmal
* tip: the amount of tip owed expressed as a decimal
*
* OUTPUT
* final cost : final cost of meal after tax and tip included.
*
**************************************************************/
#include <iostream>
using namespace std;

int main() {
	//Initialize input variables
	float mealCost = 44.5;
	float tax = 1.0675;
	float tip = 1.15;
	//Calculate final amount owed
	float finalAmount = (mealCost * tax) * tip;
	//Display meal cost, tax amount, tip amount, and total bill
	cout << "The cost of the meal is: " << mealCost << endl;
	cout << "Tax amount: " << mealCost * 0.0675 << endl;
	cout << "Tip amount: " << (mealCost * tax) * 0.15 << endl;
	cout << "Total Bill: " << finalAmount;
	return 0;
}
