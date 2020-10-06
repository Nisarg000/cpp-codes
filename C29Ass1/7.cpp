//C++ program to convert Fahrenheit to celcius by Nisarg C-29
#include<iostream>
using namespace std;

int main()
{
	int celcius,Fahrenheit;
	cout << "C++ program to convert Fahrenheit to celcius by Nisarg C-29\n ";
	cout << "Input Fahrenheits value:";
	cin >> Fahrenheit;
	celcius=((Fahrenheit-32*5)/9);
	cout << celcius;
	return 0;
}
