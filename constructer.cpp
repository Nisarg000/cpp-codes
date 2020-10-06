#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
	int a;
public:
	A(){} //default
	A(int a_) {a = a_;} //parameters
	A(A&othr) {a = othr.a;} //copy
		void scan()
		{
			cout << "Enter the value of a : ";
			cin >> a;
		}
		void print()
		{
			cout << "\na : " <<a << endl;
		}
};

class B : public A//copy
{
	int b;
public:
	B(){} //default
	B(int a_,int b_) : A(a_) {b = b_;} //parameters
	B(B & othr) : A(othr) {b=othr.b;} //copy
	void scan()
	{
		A :: scan();
		cout << "\nEnter the value of b : ";
		cin >> b;
	}
	void print()
	{
		A :: print();
		cout << "b : " << b <<endl;
	}
};
 

int main()
{
	B obj;
	obj.scan();
	obj.print();

	return 0;
}