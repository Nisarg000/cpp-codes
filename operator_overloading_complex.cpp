#include<iostream>
using namespace std;

class Complex
{
	float x,y;
public:
	Complex() //constructor 1st
	{}
	Complex(float a,float b) //constructor 2
	{
		x = a;
		y = b;
	}
	Complex operator+(Complex); //goto line 19
	void Display(void); //goto line 27
};

Complex Complex :: operator+(Complex c)
{
	Complex temp; //temporary
	temp.x = x + c.x;
	temp.y = y + c.y;
	return(temp);
}

void Complex :: Display(void)
{
	cout << x << " + " << y << "\n";
}

int main(int argc, char const *argv[])
{
	Complex C1,C2,C3;
	C1 = Complex(2.5,3.5);
	C2 = Complex(1.6,2.7);
	C3 =  C1 + C2;

	cout << "\nC1 = ";C1.Display(); //2.5 + 3.5
	cout << "\nC2 = ";C2.Display(); //1.6 + 2.7
	/*								 + _________*/
	cout << "\nC3 = ";C3.Display(); //4.1 + 6.2
	return 0;
}