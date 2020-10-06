//Any prime is Mersenne Prime if it is of the form 2^k-1 where k is an integer greater than or equal to 2.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int user_input_1,p = 0,ans = 0,i,n1;
	double result;
  cout << "Enter a number: ";
  cin >> user_input_1; //e.g 7,31
    n1 = user_input_1 + 1; // e.g n1 = 31 + 1 = 32;
      for(i = 0; ;i++)
        {
          p = (int)pow(2,i); //(base,power) which is equal to base into power // e.g. (8,3) =8*8*8 = 512
            if(p > n1) //
            {
              break;
            }

            else if(p == n1)
            {
              cout << " " << user_input_1 << " is a Mersenne number." <<endl;
              ans = 1;
            }
        }
  if(ans == 0)
  {
   cout << " " << user_input_1 << " is not a Mersenne number." <<endl;
  }
}