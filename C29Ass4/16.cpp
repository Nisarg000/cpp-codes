/*Create a structure for employee entity. 
Include data members emp_id, Name, Dep_name, Salary
Include necessary member functions and make 2 variable of employee structure*/

#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
#include<string>

using namespace std;

struct Employees
{
	int Emp_id()
	{
		int emp_id;
		cout << "Enter your employee id : ";
		cin >> emp_id;
		cout << emp_id;
	}
	int Name()
	{
		string employee_name;
		cout << "\nPlease enter your name : ";
		cin >> employee_name;
		cout << employee_name;
	}
	int Dep_name()
	{
		string department_name;
		cout << "\n Enter your departments name : ";
		cin >> department_name;
		cout << department_name;
	}
	int Salary()
	{
		int salary;
		cout << "\nEnter your salary : ";
		cin >> salary;
		cout << salary;
	}

};
int main()
{
	Employees temp_object2;
	Employees temp_object1;
	temp_object1.Emp_id();
	temp_object1.Name();
	temp_object1.Dep_name();
	temp_object1.Salary();

	return 0;
}