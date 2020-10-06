// C++ program to calculate area of circle (area=pi*r*r) by Nisarg c-29. 
#include<iostream>
using namespace std; 
int main()
{
	float radius,area; // data type declaration
	const float pi=3.14; // fixed value of pi
	cout << " C++ program to calculate area of circle by Nisarg c-29\n"; // one can also do endl along with \n .endl causes a flushing of the output buffer every time it is called, whereas \n does not. so I will use \n in c
	cout << "Enter the value of radius:"; 
	cin >> radius; // user inputs radius
	area=(pi*radius*radius); // formula of area of circle 
	cout << area << endl;
	return 0;
}
