/*
*/
#include<iostream>
using namespace std;

class Space
{
	int x,y,z;
public:
	void GetData(int a,int b,int c);
	void operator-(); //overload unary minus
	void Display();
};

void Space :: GetData(int a,int b,int c)
{
	x = a;
	y = b;
	z = c; 
}
void Space :: Display()
{
	cout << x << "\t" << y << "\t" << z;
}
void Space :: operator-()
{
	x = -x;
	y = -y;
	z = -z;
}

int main(int argc, char const *argv[])
{
	Space S;
	S.GetData(10,-20,30);
	-S; //activates  operator( function
	cout << "S : ";
	S.Display();

	return 0;
}