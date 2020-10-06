/* C++ program to find addition of two single dimension array of same size and store result in another array */
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;
class Addition
{
public:
	int sum(int a[],int b[])
	{
		int temp[4];

		for(int i = 0; i < 3; i++)
		{
			temp[i] = a[i] + b[i];
		}

		for (int i = 0; i < 3; ++i)
		{
			cout << temp[i] << endl;
		}
		return 0;
	}
};
int main()
{
	int a[3] = {5,4,3},b[3] = {2,3,4};
	Addition temp_object;
	temp_object.sum(a,b);

	return 0;
}