/*c++ program to make function for calculator of two numbers using switch case by Pure_Donkey.*/
#include<iostream>
#include<bits/stdc++.h> //remove this header file if you recieve an error in mac/linux/ubuntu
using namespace std;

inline void displayMenu()
{  
  cout << "\n-------------------------------------------------------------------------------------------\n";
  cout << "\nPress 1 to exit.\n";
  cout << "\nPress 2 to find sum\n";
  cout << "\nPress 3 to find difference\n";
  cout << "\nPress 4 to find product\n";
  cout << "\nPress 5 to find division\n";
  cout << "\nPress 6 to find modulus\n";
}

inline void sumn(int user_input_1, int user_input_2){
  int sum;
  sum = user_input_1 + user_input_2;
  cout << sum << endl;
}

inline void diff(int user_input_1, int user_input_2){
  int sub;
  sub = user_input_1 - user_input_2;
  cout << sub << endl;  
}

inline void multi(int user_input_1, int user_input_2){
  int mul;
  mul= user_input_1 * user_input_2;
  cout << mul << endl;    
}

inline void divis(int user_input_1, int user_input_2){
  double div;
  div = (double)user_input_1 / user_input_2;
  cout << div << endl;
}
 
inline void modul(int user_input_1, int user_input_2){
  int mod;
  mod = user_input_1 % user_input_2;
  cout << mod << endl;
}

int main()
{
  int choice = 0,user_input_1,user_input_2;
  int sub = 0,mul = 1,div = 1,sum = 0,mod = 0;

  cout << "Enter the first value : ";
  cin >> user_input_1;
  cout << "\nEnter the second value : ";
  cin >> user_input_2;
  
  // char xChoice='N';
  // while(xChoice=='N'){
  while(1)
  {
    
    displayMenu();
    cout << "\nAnd now enter your choice : ";
    cin >> choice;
    switch(choice)
    {
      case 1 :
        exit(0);
        break;

      case 2 : 
        sumn(user_input_1, user_input_2);
        break;

      case 3 : 
        diff(user_input_1, user_input_2);
        break;

      case 4 : 
        multi(user_input_1, user_input_2);
        break;

      case 5 : 
        divis(user_input_1, user_input_2);
        break;

      case 6 : 
        modul(user_input_1, user_input_2);
        break;

      // default :
      // cout << "I told you to enter an choice between 1 to 6 are you blind ?";
    }
    // cout << " Do you want to exit (Y/N) :";
    // cin >> xChoice;
  }
  
  return 0;
}