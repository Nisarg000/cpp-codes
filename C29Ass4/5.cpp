/*Create a pointer variable of type char and store an address of a char variable and print the value using pointer.*/
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;
int main()
{
  char address ,*pointer_variable;

  cout << "Enter the value of char : ";
  cin >> address; // to take user input

  pointer_variable = &address;//to store the address of user input in the pointer

  cout << "\n The value of pointer variable is : " <<*pointer_variable << endl; //to print the value
  cout << "\n The address of pointer is : " <<&pointer_variable << endl;//to print the address of variable address.

  return 0;
}