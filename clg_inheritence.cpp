/*
	Program Created by :-  Pure DONKEY
	Date Of Creation   :-  7/29/2020
	Purpose of Program :-  	Write a program to create base class college with data member college name and city.
							Create another class department with department name which inherits college. 
							Create class teacher with data member teacher name and qualification which inherits department.
							Display all data appropriately.
*/

#include<iostream>
#include<string>
using namespace std;

class College
{
public: 
	string clg_name,city;
};

class Department:virtual public College
{
public:
	string dept_name;
};

class Sensei:virtual public Department
{
public:
	string teach_name,teach_qualification;
	void GetValue()
	{
		cout << "\nEnter your college name : ";
		getline(cin,clg_name);

		cout << "\nEnter your city name : ";
		getline(cin,city);

		cout << "\nEnter your department's name : ";
		getline(cin,dept_name);

		cout << "\nEnter your name : ";
		getline(cin,teach_name);

		cout << "\nEnter your respective qualifications : ";
		getline(cin,teach_qualification);
	}
	void Display()
	{
		cout << clg_name << "\t" << city << "\t" << dept_name <<  "\t" <<teach_name <<  "\t" << teach_qualification << endl; 
	}
};

int main(int argc, char const *argv[])
{
	Sensei obj;

	obj.GetValue();
	obj.Display();

	return 0;
}