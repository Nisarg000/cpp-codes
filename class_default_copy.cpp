#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Student
{
	int roll_number;
	char name;
	int standard;
public:
		random_1()
		{
			cout << "This is an default argument : \n";
		}
		random_2(int roll_number,char name[50],int standard)
		{
			cout << "This is for demonstrating an parameter\n";		
		}
		random_3(student& other)
		{
			cout << "This is for demonstrating an copy\n";
		}
};

int main()
{
	Student.temp_object;
	temp_object.random_1();
	temp_object.random_2(10,"Pure_Donkey",8);
	temp_object.random_3();

	return 0;
}