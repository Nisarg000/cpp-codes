#include<iostream>
using namespace std;

class Calculator
{
private:
	int user_input_1,user_input_2,choice;
public:
	int add()
	{
		cout << user_input_1 + user_input_2;
	}
	int sub()
	{
		cout << user_input_1 - user_input_2;
	}
	int mul()
	{
		cout << user_input_1 * user_input_2;
	}
	int div()
	{
		cout << user_input_1 / user_input_2;
	}
	int mod()
	{
		cout << user_input_1 % user_input_2;
	}

};

int main(int argc, char const *argv[])
{
	int user_input_1 = 0,user_input_2 = 0,choice;
	Calculator obj;
	// obj.user_input_1,obj.user_input_2,obj.choice;
	while(1)
	{
		cout << "Enter two values : \n";
		cin >> user_input_1 >> user_input_2;

		cout << "Press 0 to exit\n";
		cout << "Press 1 to add\n";
		cout << "Press 2 to sub\n";
		cout << "Press 3 to mul\n";
		cout << "Press 4 to div\n";
		cout << "Press 5 to mod\n";

		cout << "Please enter your choice : ";
		cin >> choice;

		switch(choice)
		{
			case 0:
				exit(0);
			case 1:
				obj.add();
				break;
			case 2:obj.sub();break;
			case 3:obj.mul();break;
			case 4:obj.div();break;
			case 5:obj.mod();break;		
		}
	}	 
	return 0;
}