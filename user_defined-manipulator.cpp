#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

ostream &currency(ostream &output)
{
	output << "Dollar";
	return output;
}

ostream &form(ostream &output)
{
	output.setf(ios::showpos);
	output.setf(ios::showpoint);
	output.fill('$');
	output.precision(2);

	output << setiosflags(ios::fixed) << setw(10);

	return output;
}

int main(int argc, char const *argv[])
{
	cout << "\n"< < form << 6064.5 << "\t" << currency << "\t";
	return 0;
}