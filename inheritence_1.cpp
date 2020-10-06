/*
    Program Crweated By : - Pure Donkey
    Date O fCreation : - 6/19/2020;
    Purpose of program : To clear concept of private,public
*/

#include<bits/stdc++.h>
using namespace std;

class Shape
{
private:
    int length,breadth;
public:
    inline int Area_Rectangle()
    {
        cout << "\nEnter the value of length : ";
        cin >> length;
        cout << "\nEnter the value of breadth : ";
        cin >> breadth;
        cout << length * breadth;
    }
    inline int Area_Square()
    {
        cout << "\nEnter the value of length : ";
        cin >> length;
        cout << length * length;
    }
};

int main(int argc, char const *argv[])
{
    int choice;

    Shape obj;
    
    /*Following comments will return error*/
    /*cout << "\nEnter the value of length : ";
    cin >> obj.length;
    cout << "\nEnter the value of breadth : ";
    cin >> obj.breadth;
    cout << "\nEnter the value of height : ";
    cin >> obj.height;*/
    
    cout << "\nPress 1 to find Squares Area : ";
    cout << "\nPress 2 to find Rectangles Area : ";
    cout << "\nPress 3 to exit";

    cout << "\n\nEnter your choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1 : 
            obj.Area_Square();
            break;
        case 2 : 
            obj.Area_Rectangle();
            break;
        case 3 :
            exit(0);        
    }
    return 0;
}