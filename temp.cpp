/*  #include <iostream>
  using namespace std;
 
  int main()
{
	int i;
	int a[5] = {1, 2, 3, 4, 5};
	int *p = a;
	for (i = 0; i < 5; i++) 
	{
		cout << *p << endl;
		*p++;
	}
	 
  return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int &ref = x;// Value of x is now stored in reference

	ref = 20;
	cout << "x = " << x << endl ;// Value of x is now changed to 20

	x = 30;
	cout << "ref = " << ref << endl ;
return 0;
}