// C++ program to enter the principal, rate & time and print the simple interest by Nisarg c-29.  
#include<iostream>
using namespace std;
// formula of SI=P *R *T
int main()
{
	int principal,rate,time,SI;
	cout << "C++ program to print simple interest by Nisarg C-29\n"; // one can also do endl along with \n .endl causes a flushing of the output buffer every time it is called, whereas \n does not. so I will use \n in c
	cout << "Enter principal,rate and time:";
	cin >> principal >> rate >> time;// user inputs principal,rate and time

	SI = principal*rate*time/100; // 100 for percentage
	cout << SI << endl;
	return 0;
}