/*Create one structure for student
Include data members like Rollno, name, sub1, sub2, sub3.
Take values from user for all the variables and print them.*/

#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
#include<string>
using namespace std;
struct Student
{
	int roll_number,sub1,sub2,sub3;
	string name;

	void Rollno()
	{
		cout << "Please enter your roll number : ";
		cin >> roll_number;
	}

	void Name()
	{
		cout << "\nEnter your name : ";
		cin >> name;
	}


	void Subjects()
	{
		cout << "\n Enter your marks for the first subject : ";
		cin >> sub1;
		cout << "\n Enter your marks for the second subject : ";
		cin >> sub2;
		cout << "\n Enter your marks for the third subject : ";
		cin >> sub3; 
	}
	void Total()
	{
		double total = 0;
		total = double(sub1 + sub2 + sub3) / 300;
		total *= 100;
		cout << "\n The percentage for all three subjects are : " << total;
	}
};
int main()
{
	Student temp_object;
	temp_object.Rollno();
	temp_object.Name();
	temp_object.Subjects();
	temp_object.Total();
}