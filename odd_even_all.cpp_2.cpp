//return and without argument odd_even
#include<iostream>
using namespace std;
class First
{
	public:
	int odd()
	{
		int num1;
		cout << "Enter any one number:";
		cin >> num1;
	}
	int check()
	{
		int num1;
		if (num1%2 == 0)
		{
			cout << "\nYou have entered an even number:" <<num1;
		}
		else
			cout << "\nYou have entered an odd number:" << num1;
	}
};
int main()
{
	First f1;
	f1.odd();
	f1.check();
	return 0;
}