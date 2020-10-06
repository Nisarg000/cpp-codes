/*Define a class Country that store the name of the country; its population and area.
Create 2 or 3 objects of this class and find the county with largest population and
the country which is geographically largest.(pass object as arguments)*/

#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
#include<string>

using namespace std;

class Country
{
private:
	int size,population;
	double area;
	string country_name;
	int pos_area, pos_ppln; //position area and position population
public:
	void scan()
	{
		cout << "\nEnter the countries name: ";
		cin >> country_name;
		cout << "\nEnter the population: ";
		cin >> population;
		cout << "\nEnter the area of the country: ";
		cin >> area;
	}
	static int Calculation_Area(int size, Country c[])
	{
		double max = 0;
		int max_pos = 0;
		for(int i = 0;i < size;i++)
		{
			if(c[i].area > max)
			{
				max = c[i].area;
				max_pos = i;
			}
		}
		return max_pos;
	}
	static int Calculation_Population(int size, Country c[])
	{
		int max = 0;
		int max_pos=0;
		for (int i = 0; i < size; ++i)
		{
			if(c[i].population > max)
			{
				max_pos = i;
				max = c[i].population;
			}
		}
		return max_pos;
	}
	void print()
	{
        cout << "Country Name :\t" << country_name << "\n";
        cout << "Population :\t" << population << "\n";
        cout << "Area :\t" << area << "\n";
    }
};

int main()
{
    int size;
	cout << "Enter the number of countries that you want : ";
	cin >> size;
	Country countries[size];
	for (int i = 0; i < size; ++i)
	{
		countries[i].scan();
	}

    cout << "Details of Country having Max. Area : \n";
	int max_pos = Country::Calculation_Area(size, countries);
	countries[max_pos].print();

    cout << "Details of Country having Max. Population : \n";
	max_pos = Country::Calculation_Population(size, countries);
    countries[max_pos].print();
	return 0;
}