#include<iostream>
using namespace std;

class demo
{
	int x,y,z;
public:
	int GetData(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}

	int Display();
	int operator -();
};

int demo::Display()
{
	cout << "\nx = " <<x << " y =" << y << " z = " <<z <<"\n"; 
}

int demo::operator -()
{
	x = -x;
	y = -y;
	z = -z;
}

int main(int argc, char const *argv[])
{
	demo obj;
	obj.GetData(10,20,30); //value passed in xyz
	obj.Display(); //overload function
	-obj;
	obj.Display();

	return 0;
}