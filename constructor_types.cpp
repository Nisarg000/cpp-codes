#include<iostream>
using namespace std;

class Sample
{
private:
	int x,y;
public:
	Sample() //default constructor
	{
		x = 2;
		y = 3;
	}

	Sample(int a,int b) //parameterized constructor
	{
		x = a,y = b;
	}

	Sample(Sample &obj) //copy constructor
	{
		x = obj.x;
		y = obj.y;
	}

	void Display()
	{
		cout << "The value of x and y is : " <<x << "\t"<< y;
	}
};

int main(int argc, char const *argv[])
{
	Sample obj;
	Sample obj1(5,6);
	Sample obj2(obj);
	cout << "\n This are the value of obj : ";
	obj.Display();
	cout << "\nThis are the value of obj1 : ";
	obj1.Display();

	cout << "\nThis are the value of obj2 : ";
	obj2.Display();
	return 0;
}