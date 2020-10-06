#include <iostream>
using namespace std;

class Complex
{
	double x,y;

	Complex()
	{
		x = y = 0;
	}

	Complex(double x,double y)
	{
		this -> x = x;
		this -> y = y;
	}

	Complex(Complex& other)
	{
		x = other.x;
		y = other.y;
	}

	Complex operator +(Complex other)
	{
		Complex ans;

		ans.x = x + other.x;
		ans.y = y + other.y;

		return ans;
	}

	Complex operator -(Complex other)
	{
		Complex ans;

		ans.x = x - other.x;
		ans.y = y - other.y;

		return ans;
	}

	Complex operator *(Complex other)
	{
		Complex ans;

		ans.x = x * other.x;
		ans.y = y * other.y;

		return ans;
	}

	Complex operator /(Complex other)
	{
		Complex ans;

		double div = other.x*other.x + other.y * other.y;

		ans.x = (x * other.x + y * other.y) / div;
		ans.y = (x * other.y + y * other.x) / div;

		return ans;
	}

	void Input()
	{
		cout << "\nEnter x and y : ";
		cin >> x >> y;
	}

	void Output
	{
		cout << "\nx : " << x;
		cout << "\ny : " << y;
	}
};


int main(int argc, char const *argv[])
{
	Complex c1;
	c1.Input();
	Complex c2(10,20);

	Complex add,sub,mul,div;

	add = c1 + c2;
	sub = c1 - c2;
	div = c1 / c2;
	mul = c1 * c2;

	cout << "\nAddition : ";
	add.Output();

	cout << "\nsubtraction : ";
	sub.Output();

	cout << "\nDivison : ";
	div.Output();

	cout << "\nMultiplication : ";
	mul.Output();

	return 0;
}