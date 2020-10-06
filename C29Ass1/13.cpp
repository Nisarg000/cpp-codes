//  C++ program to find the quotient of two integers by Nisarg C-29
#include<iostream>
using namespace std;

int main()
{
	int dividend,divisor,quotient,remainder;
	cout << " C++ program to find the quotient of two integers by Nisarg C-29\n";
	cout << "Enter dividend:";
	cin >> dividend;

	cout << "\nEnter divisor:";
	cin >> divisor;

	quotient=dividend / divisor;
	cout << "quotient = " << quotient;

	remainder = dividend % divisor;
	cout << "\n divisor = " << remainder;
	return 0;
}