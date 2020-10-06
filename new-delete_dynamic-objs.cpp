#include <iostream>
using namespace std;

class Test
{
	int a,b;
public:
	Test()
	{
		cout << "\n Constructor of class Test called here.";
		a = 5, b = 10;
	}
	~Test()
	{
		cout << "\n Deconstructor of class Test called here.";
	}

	void Show()
	{
		cout << "\na : " << a;
		cout << "\nb : " << b;
	}
};

int main(int argc, char const *argv[])
{
	Test *pointer;
	pointer = new Test;

	// pointer.Show(); //This shit won't work here due to the obj being dynamic
	pointer->Show();

	delete pointer;
	
	return 0;
}