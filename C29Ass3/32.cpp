/*Write a C++ program to find the output like below:
 ***** (if not passed character and number (range value)) 
 #####(if not passes number (range value) 
 @@@( passed character and number (range value)) 
 Note : assign default values to the arguments in function declaration */

#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;

class Patterns
{
private:
  int user_input_int;
  char user_input_char;
public:
  void do_Something(int user_input_int,char user_input_char){
    int int_null;
    char char_null;
    if ((user_input_char == char_null) && (user_input_int == int_null))
    {
      cout << "\n \t*****";
    }
    else if (user_input_int == int_null)
    {
      cout << "\n \t#####";
    }
    else 
    {
      cout << "\n \t@@@";
    }
  }
};
int main()
{
  int int_null, x;
  char char_null;
  x = int_null;
  Patterns object_1;
  cout << "Trying for (5,'N') : ";
  object_1.do_Something(5,'N');

  cout << "Trying for (NULL,'N') : ";
  object_1.do_Something(x,'N');

  cout << "Trying for (5,NULL) : ";
  object_1.do_Something(5,char_null);
  return 0;
}