#include<iostream>
using namespace std;

class Parent
{
private:
	int a, b, c;
public:
	Parent()
	{
		a = 5,b = 6,c = 7;
		cout << "\nThis is the default constructor of the class Parent";
	}

	void Display()
	{
		cout << a << " " << b << " " << c << endl;
	}
};

class A:public virtual Parent //added virtual as the function Display is being repeated
{
	int x, y, z;
public:
	A()
	{
		x = 5,y = 8,z = 9;
		cout << "This is the default constructor of A\n";
	}

	void Display1()
	{
		cout << "value of class A are : " << x << " " << y << " " << z;
	}
};

class B:virtual public Parent
{
	int p, q, r;
public:
	B()
	{
		p = 7,q = 6,r = 9;
		cout << "\nThis is the default constructor of B";
	}

	void Display2()
	{
		cout << "\nvalue of class B are : " << p << " " << q << " " << r;
	}
};

class C : public A,public B
{
	int w;
public:
	C()
	{
		w =  9;
		cout << "\nThis is the default constructor of C";
	}

	void Display3()
	{
		cout << "\nvalue of class C are : " << w;
	}
};

int main()
{
	C obj;
	obj.Display();
	obj.Display1();
	obj.Display2();
	obj.Display3();

	return 0;
}