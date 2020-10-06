// C++ program for Addition, multiplication, subtraction, division of two number Using switch case by Nisarg c-29
#include <iostream>
using namespace std;

int main()
{
	int num1,num2,sum,multi,sub,choice;
	float div; //for decimel answers
	start: // label
	cout << "C++ program for Addition, multiplication, subtraction, division of two number Using switch case by Nisarg c-29\n";
	cout << "Enter any two numbers\n";
	cin >> num1 >> num2;
	cout << "Press 1 to add\n";
	cout << "Press 2 to subtract\n";
	cout << "Press 3 to multiply\n";
	cout << "press 4 to divide\n";
	cout << "Press 5 to exit\n";

	cout << "Enter your choice:";
	cin >> choice;

	switch(choice)
	{
		case 1: sum=num1+num2;
				cout << sum << endl;
		break;

		case 2: sub=num1-num2;
				cout << sub << endl;
		break;

		case 3: multi=num1*num2;
				cout << multi << endl;
		break;

		case 4: div=num1/num2;
				cout << div << endl;
		break;

		case 5: exit(0);

	default: cout << ("Invalid Choice\n");
	}
	goto start; 

	return 0;
}