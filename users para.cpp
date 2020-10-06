// paramet ask by user but it is meaningless
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Point
{
	double x,y;
public:
	void scan();
	void print(int a,int b);
};

int main()
{
	Point p;

	int m, n;

	cout << "Enter m: ";
	cin >> m;
	cout << "Enter n: ";
	cin >> n;

	p.scan();
	p.print(m, n);

	return 0;
}

void Point::scan() // the class Point here calls the function scan using the scope resolution.
{
	cout << "Enter the first value : ";
	cin >> x;
	cout << "\nEnter the second value : ";
	cin >> y;
}
void Point::print(int a,int b)
{
	cout << "(" << a << "," << b << ")" <<endl;
}