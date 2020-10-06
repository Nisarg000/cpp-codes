/* Write a C++ program to find the sum and average of all the elements of an array. */
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;
class Addition
{
public:
	int sum(int a[],int b[])
	{
		int temp[3];
		double average = 0;

		for(int i = 0; i < 3; i++)
		{
			temp[i] = a[i] + b[i];
		}

		for (int i = 0; i < 3; ++i)
		{
			cout << temp[i] << "\n";
			average = temp[i]/2.0;
			cout <<"\nThe average is : \t" <<  average << "\n";
		}
		return 0;
	}
};
int main()
{
	int a[3] = {5,4,3}, b[3] = {2,3,4};
	Addition temp_object;
	temp_object.sum(a,b);

	return 0;
}