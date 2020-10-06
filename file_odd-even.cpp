#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int user_input[50] = {0},size;
	fstream myfile ("array-odd_even.txt");

	cout << "\nEnter the size of the array : ";
	cin >> size;

	cout << "\nEnter odd or even numbers below: ";

	for (int i = 0; i < size; ++i)
	{
		cin >> user_input[i];

		if (user_input[i] % 2 == 0 )
		{
			cout << "\nEven\n";
		}
	else
		cout << "\nodd\n";
	}

  return 0;
}