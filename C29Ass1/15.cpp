// C++ program to take two numbers from user and swap the values without using third variable by Nisarg C-29
#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout << "C++ program and take two numbers from user and swap the values without using third variable by Nisarg C-29";
	cout << "\nEnter two numbers:";
	cin >> num1 >> num2;
	num1=num1+num2;
	num2=num1-num2;
	num1=num2-num1;
	cout << "\nThe swapped variables are:" <<num1 << num2;
	return 0;
}