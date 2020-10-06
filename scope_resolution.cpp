// if you wANT TO WRITE AN FUNCTION OUTSIDE CLASS FOR SOME DAMN STUPID REASON!
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student
{
	double num_1,num_2;
public:
	void user_input();
	void print_something();
};

int main()
{
	Student temp_object;

	temp_object.user_input();
	temp_object.print_something();

	return 0;
}

void Student::user_input() // the class Student here calls the function user_input using the scope resolution.
{
	cout << "Enter the first value : ";
	cin >> num_1;
	cout << "\nEnter the second value : ";
	cin >> num_2;
}
void Student::print_something()
{
	cout << "(" << num_1 << "," << num_2 << ")" <<endl;
}