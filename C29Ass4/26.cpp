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
	void Country_name(int i)
	{
		cout << "\nEnter the countries name [" << i << "] : ";
		cin >> country_name;
	}
	void Population(int i)
	{
		cout << "\nEnter the population [" << i << "] : ";
		cin >> population;
	}
	void Area(int i)
	{
		cout << "\nEnter the area of the country [" << i <<"] : ";
		cin >> area;
	}
	int Calculation_Area(int size, Country c[])
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
	int Calculation_Population(int size, Country c[])
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
	void display_Area(Country temp)
	{
        cout << "Details of Country having Max. Area : \n";
        cout << "Country Name :\t" << temp.country_name << "\n";
        cout << "Population :\t" << temp.population << "\n";
        // cout << "Area :\t" << temp.area << "\n";
        printf("Area : \t%ld \n",temp.population);
    }

    void display_Population(Country temp)
    {
        cout << "Details of Country having Max. Population : \n";
        cout << "Country Name :\t" << temp.country_name << "\n";
        cout << "Population :\t" << temp.population << "\n";
        cout << "Area :\t" << temp.area << "\n";
    }
};

int main()
{
    int size;
	cout << "Enter the number of countries that you want : ";
	cin >> size;
	Country temp_object[size];
	for (int i = 0; i < size; ++i)
	{
		temp_object[i].Country_name(i+1);
		temp_object[i].Population(i+1);
		temp_object[i].Area(i+1);
	}
	int max_pos = temp_object[0].Calculation_Area(size, temp_object);
	temp_object[0].display_Area(temp_object[max_pos]);

	max_pos = temp_object[0].Calculation_Population(size, temp_object);
    temp_object[0].display_Population(temp_object[max_pos]);
	return 0;
}