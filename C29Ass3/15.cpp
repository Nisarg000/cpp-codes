/* Write a C++ program to perform deletion operation in an array. */
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;
int main()
{
   int array[100], position, i, size;
   cout << "Enter the total number of elements in the array\n"; //e.g 5
   cin >> size;
   cout << "Enter " <<size << " elements :-\n"; // enter 5 elements

   for (i = 0; i < size; i++)
    cin >> array[i];// to take the user's input

   cout << "Enter the location where you want to delete the array element\n";
   cin >> position; //to get the position from user

   if (position >= size + 1) //wrong syntax by user as array cannot be bigger than size prescribed before
      cout << "Deletion not possible.\n";
   
   else //if proper input by user
   {
      for (i = position - 1; i < size - 1; i++)
       array[i] = array[i+1];

      cout << "The answer is : \n";
   
      for (i = 0; i < size - 1; i++)//obviously as after an element deletion one element will be less than before.
        cout << "\t" << array[i];
    
   }
   return 0;
}