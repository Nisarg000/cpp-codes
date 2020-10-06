#include<iostream>
using namespace std;

class Complex
{
	int real,imag;
public:
	Complex()
	{
		real = 0,imag = 0;
	}
	Complex(int r,int i)
	{
		real = r; //assigning values of private here
		imag = i;
	}

	void Print()
	{
		cout <<"\n" << real << " + " << imag << "i" << endl;
	}

	Complex operator +(Complex c)
	{
		Complex temp;

		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
};

int main(int argc, char const *argv[])
{
	Complex c1(5,4); //created an obj here
	Complex c2(2,5);
	Complex c3;

	c3 = c1+c2; // c3 = c1.add(c2)
	c3.Print();

	/*int x = 5,y = 4,z = x+y;
	cout << "\nThe value of z is : " << z;*/
	
	return 0;
}