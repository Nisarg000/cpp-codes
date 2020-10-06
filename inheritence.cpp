#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class First
{
	int num_1;
	public:
		void function_1()
		{
			cout << "num_1 :: function_1()" << endl;
		}
};
class Second : public First
{
	int num_2;
public:
	void function_2()
	{
		cout << "Second :: function_2()" << endl;
	}
};

int main()
{
	Second temp_object;
	temp_object.function_1();
	temp_object.function_2();

	return 0;
}