// C++ progream to find result using functions by Nisarg C-29


#include<iostream>
using namespace std;

int roll_no();
int subjects_marks();

int roll_no()
{
	int roll;
	cout << "Enter your Roll No.: ";
	cin >> roll;

	return roll;
}

int subjects_marks()
{
	int sub_marks[3], total;

	cout << "\nEnter your marks: ";
	for (int i = 0; i < 3; ++i)
	{
		cin >> sub_marks[i];
	}

	total = sub_marks[0] + sub_marks[1] + sub_marks[2];

	return total;
}

int percent(int total)
{
	int percentage;

	percentage = total/3;

	return percentage;
}

int main()
{
	int roll, marks[3], total, percentage;

	roll = roll_no();

	total = subjects_marks();

	percentage = percent(total);

	cout << "\nRoll No: " << roll;

	if (percentage<40)
	{
		cout << "Grade - F";
	}

	else if (percentage > 40 && percentage < 48)
	{
		cout << "Grade - C\n";
	}

	else if (percentage > 44 && percentage < 55)
	{
		cout << "Grade - B\n";
	}

	else if (percentage > 55 && percentage < 60)
	{
		cout << "Grade - B+\n";
	}

	else if (percentage > 60 && percentage < 70)
	{
		cout << "Grade - A\n";
	}

	else if (percentage > 70 && percentage < 85)
	{
		cout << "Grade - O\n";
	}

	else if (percentage > 85 && percentage < 101)
	{
		cout << "Grade - O+\n";
	}

	return 0;
}