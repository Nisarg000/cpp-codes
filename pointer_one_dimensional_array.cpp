#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x[5],size;
	int *px = x;

	cout << "Enter the size of array : ";
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cout << "\nEnter the value of array : ";
		cin >> *(x + i); 
	}

	for (int i = 0; i < size; ++i)
	{
		cout << "\n" << *( x + i);
	}

	return 0;
}