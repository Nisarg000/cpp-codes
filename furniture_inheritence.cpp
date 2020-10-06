/*
	Program Created by :-  Pure DONKEY
	Date Of Creation   :-  7/29/2020
	Purpose of Program :-  	Define a class for furniture with color, width and height as data members. 
							Define another class for shelf, which inherits the data members of the class furniture and has a
							data member for storing the number of shelves. Get the details from the user and display it.
*/

#include<iostream>
#include<string>
using namespace std;

class Furniture
{
public:
	int width,height;
	string color;
		int User_Input()
		{
			cout << "\nPlease enter the color of the furniture : ";
			cin >> color;

			cout << "\nPlease enter the width of the furniture : ";
			cin >> width;

			cout << "\nPlease enter the height of the furniture : ";
			cin >> height;

			return 0;
		}
};

class Shelve : public Furniture
{
public:
	int Display()
	{
		cout <<endl << color << "\t" << height << "\t" << width;

		return 0;
	}
};

int main(int argc, char const *argv[])
{
	Shelve obj;

	obj.User_Input();
	obj.Display();

	return 0;
}