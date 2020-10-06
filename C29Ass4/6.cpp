/*Create an single dimension array of integer type and access it with the help of pointer.*/
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;
int main()
{
	int user_input_1[100] , *pointer_variable;
	int i;

	for (int i = 0; i < 1; ++i)
	{
		cout << "Enter a value : ";
		cin >> user_input_1[i];
	}
	
	for (int i = 0; i < 1; ++i)
	{
		cout << "\nThe value of integer is : " << user_input_1[i];
		cout << "\n \nThe address of the integer is : " << &user_input_1[i];
	}
	
	for (int i = 0; i < 1; ++i)
	{
		pointer_variable = &user_input_1[i];
		cout << "\n\nEnter the value of pointer : " ;
		cin >> *pointer_variable;
		cout << "\nSo now even the normal value would change to : " << user_input_1[i] << "\n\n";
	}

  return 0;
}