//C++ program to find the area and perimeter of rectangle,area=l*w, p=2(l+w) by Nisarg C-29
#include<iostream>
using namespace std;

int main()
{
	int area,length,width,perimeter;
	cout << "C++ program to find the area and perimeter of rectangle by Nisarg C-29\n";
	cout << "Enter the value of length and width:"; 
	cin >> length >> width; //user inputs value
	area=length*width; // formula of area
	cout << "\nThe area of rectangle is:" << area; // output of area
	perimeter=2 *(length+width); // perimeter if rectangle formula
	cout << "\nThe perimeter of the rectangle is:" <<perimeter; // output of perimeter
	return 0;
}
