/*Create a class salesman which includes private data members salesman_no, Salesman_name, product_no, target, sales_made, commission
and private method calculate_comm() which calculates 20% commission on sales
if target is less then sales
Public method for reading and printing and calc_add_mon_sale which add sales.*/
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
#include<string>

using namespace std;

class Salesman
{
private:
	int salesman_number,product_number;
	double commission = 0,target,sales_made;
	string salesman_name;
public:
		int Salesman_no()
		{
			cout << "Enter your salesman number : ";
			cin >> salesman_number;
			cout << salesman_number;
		}
		int Salesman_name()
		{
			cout << "\nEnter your name : ";
			cin >> salesman_name;
			cout << salesman_name;
		}
		int Product_no()
		{
			cout << "\nEnter the product number : ";
			cin  >> product_number;
			cout << product_number;
		}
		int Target()
		{
			cout << "\nEnter the sales target : ";
			cin >> target;
			cout << target;
		}
		int Sales_made()
		{
			cout << "\nEnter the total sales which you have made recently : ";
			cin >> sales_made;

			if (target > sales_made)
			{
				cout << "Unfortunately, you have not reached the sales target so you won't receive any commission.";
				exit(0);
			}
			else
			{
				cout << "\nCongratulations! You have have managed to reached the sales target you so deserve an commission\n";
			}
		}
		int Calculate_comm()
		{
			commission = (double)sales_made * 20 / 100;
			cout << "\n You have earned " << commission << " commission";
		}
};

int main()
{
	Salesman temp_object;
	temp_object.Salesman_no();
	temp_object.Salesman_name();
	temp_object.Product_no();
	temp_object.Target();
	temp_object.Sales_made();
	temp_object.Calculate_comm();

	return 0;
}