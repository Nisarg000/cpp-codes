#include<iostream>
using namespace std;

class Complex
{
	int a,b;
public:

	void GetData(int x,int y) //passed parameters value to the pvt variables
	{
		a = x;
		b = y;
	}

	void Display()
	{
		cout << "\na : "<<a << " " << " b : "<< b <<endl; 
	}

	Complex add(Complex second_obj)
	{
		Complex temp;

		// temp of a = 1 + 4 = 5; 
		temp.a = a + second_obj.a; // temp of a = c1a + c2 //
		//temp of b = 2 + 5 = 7;
		temp.b = b + second_obj.b;

		return temp;
	}
	~Complex(){}
};

int main(int argc, char const *argv[])
{
	Complex c1,c2,c3;

	c1.GetData(1,2);
	c2.GetData(4,5);

	// c3 = c1 + c2; //wrong

	c3 = c1.add(c2);
	c3.Display(); 

	return 0;
}