#include<iostream>
using namespace std;

class Number
{
public:
	int n;
	Number(){}

	void Read()
	{
		cout << "\nPlease enter a number here : ";
		cin >> n;
	}

	int operator <(Number whatever)
	{
		if (n < whatever.n)
		{
			return 1;
		}
		else
			return 0;
	}

	int operator >(Number whatever)
	{
		if (n > whatever.n)
		{
			return 1;
		}
		else
			return 0;
	}

	int operator ==(Number whatever)
	{
		if (n == whatever.n)
		{
			return 1;
		}
		else
			return 0;
	}	
	~Number(){}
};

int main(int argc, char const *argv[])
{
	Number num1,num2;

	num1.Read();
	num2.Read();

	if(num1 < num2)
		cout << "\nN1 is lesser than num2.";
	else if(num1 > num2)
		cout << "\nN1 is greater than num2.";
	else
		cout << "\nN1 and N2 are the same.";

	return 0;
}