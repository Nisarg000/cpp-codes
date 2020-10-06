#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
	int acc_no,balance,user_input_bank_dr,user_input_bank_cr;
	string name,garbage;
public:
	int Input()
	{
		cout << "\nPlease enter your account number : ";
		cin >> acc_no;

		// balance if remaining for > 500
		cout << "\nPlease enter your new bank balance : ";
		cin >> balance;

		if (balance < 500)
		{
			
		}
		cout << "Please enter your name : ";
		cin.ignore(1);
		getline(cin, name);

		return 0;
	}
	int Debit()
	{
		cout << "\nPlease enter the account name to debit  : ";
		cin.ignore(1);
		getline(cin, garbage);

		cout << "Enter the amount value : ";
		cin >> user_input_bank_dr;

		if (balance > 500 && user_input_bank_dr > 0)
		{
			cout << "\nTransfer successfully debited to : " << garbage;
		}

		return 0;
	}
	int Credit()
	{
		cout << "\nPlease enter the account name to credit to  : ";
		cin.ignore(1);
		getline(cin, garbage);

		cout << "Enter the amount value : ";
		cin >> user_input_bank_cr;

		if (balance > 500 && user_input_bank_dr > 0)
		{
			cout << "\nTransfer successfully Credited to : " << garbage;
		}

		return 0;
	}
	int Output()
	{
		cout << endl << name << " your bank balance is : " << balance;
		cout << endl << acc_no;

		return 0;
	}

};

int main(int argc, char const *argv[])
{
	Account call;
	call.Input();
	call.Debit();
	call.Credit();
	call.Output();
	return 0;
}