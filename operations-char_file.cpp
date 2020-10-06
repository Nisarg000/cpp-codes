#include<iostream>
#include<fstream>
#include0<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char user_input[50];

	cout << "\nenter a string : ";
	cin >> user_input;

	int len = strlen(user_input);

	fstream file;
	file.open("TEXT",ios:: in | ios :: out);

	for (int i = 0; i < len; ++i)
	{
		file.put(user_input[i]);
	}
		file.seekg(0);

		char ch;

		while(file)
		{
			file.get(ch);
			cout << ch;
		}

	return 0;
}