/* Create five functions like show_int, show_float, show_double, show_charand show_string
to display value of each data types respectively. */


#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
#include<string>

using namespace std;

inline void show_int()
{
  int user_input_int;
  cout << "Enter an integer value : ";
  cin >> user_input_int;
  cout << user_input_int;
  cout << "\n And its size is : " << sizeof(user_input_int);
}

inline void show_double()
{
  double user_input_double;
  cout << "\n Enter an double value : ";
  cin >> user_input_double;
  cout << user_input_double;
  cout << "\n And its size is : " << sizeof(user_input_double);
}

inline void show_float()
{
  float user_input_float;
  cout << "\n Enter an floating value : ";
  scanf("%f",&user_input_float);
  cout << user_input_float;
  cout << "\n And its size is : " << sizeof(user_input_float);
}

inline void show_charand()
{
  char user_input_char;
  cout << "\nEnter an char value : ";
  cin >> user_input_char;
  cout << user_input_char;
  cout << "\n And its size is : " << sizeof(user_input_char);
}


inline void show_string()
{
  string user_input_string;
  cout << "\nEnter an string value : ";
  cin >> user_input_string;
  cout << user_input_string;
  cout << "\n And its size is : " << sizeof(user_input_string);
}

int main()
{
  show_int();
  show_double();
  show_float();
  show_charand();
  show_string();

  return 0;
}
