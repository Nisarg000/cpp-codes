//C++ program to find total,average and grade using functions by Nisarg C-29
#include<iostream>
using namespace std;

int grade()
{
	int subjects, subject_marks[101], total = 0, grade, percentage;

	cout << "C++ program to find total,average and grade using functions by Nisarg C-29\n";
	cout << "Total subjects: " << endl;
	cin >> subjects;

	cout << "Enter your marks: "<< endl;

	for (int i = 0; i < subjects; ++i)
	{
		cin >> subject_marks[i];
	}

	for (int i = 0; i < subjects; ++i)
	{
		total = total + subject_marks[i];
	}

	cout << "\nTotal: " << total;

	percentage = total / subjects;

	cout << "\nPercentage: " << percentage;

	if (percentage < 40 )
	{
		cout << "Grade - F\n";
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

int main()
{
	grade();

	return 0;
}
