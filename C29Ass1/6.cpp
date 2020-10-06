//C++ program to demonstrate swapping of two values using function by Nisarg C-29.
#include <iostream>
using namespace std;

int swap()
{
	int num1, num2; // for e.g. num1=10,num2=20
	cout << "C++ program to demonstrate swapping of two values using functions by Nisarg C-29.\n";
	cout << "Enter two values:";
	cin >> num1 >>num2 ;

	num1 = num1 + num2;    // num1= 10+20=30;
	num2 = num1 - num2;   // num2= 30-20=10;
	num1 = num1 - num2;  // num1= 30-10=20;

	cout <<"\nfirst number : " << num1;
	cout <<"\nsecond number: " << num2;
}

int main()
{
	swap();

	return 0;
}
