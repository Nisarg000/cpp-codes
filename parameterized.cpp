/*
    Program Crweated By : - Pure Donkey
    Date O fCreation : - 6/19/2020;
    Purpose of program : To clear concept of paramterized user input
*/

#include<bits/stdc++.h>
using namespace std;

class Foo
{
public:
    inline void Bar(int w,int x,int y = 10,int z = 20)
    {
        cout << w+x+y+z << "\n";
    }
};

int main(int argc, char const *argv[])
{
    int w,x;
    Foo obj;
    cout << "\nEnter two values : ";
    cin >> w >> x;
    obj.Bar(w,x);
    return 0;
}