// C++ program to make class for circle by Nisarg C-29
#include<iostream>
using namespace std;
class Circle
{
	private:
			float pi=3.14,radius,area;
	public:
			 void Area()
			 {
			 	cout << "C++ program to make class for circle by Nisarg C-29";
    	        cout << "\n Enter the value of radius";
    	        cin >> radius;
    	        area = pi * radius * radius;
    	        cout << "\n The area of circle is : " << area;
			 }
};

int main()

{
	Circle b;
	b.Area();
	return 0;
}
