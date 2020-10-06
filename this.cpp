#include <iostream>
using namespace std;
class A
{
public:
    A()
    { 
        cout << "A constructer called at " << this << endl;
    } 

    void SayHello()
    {
        cout << "Hi! I am the instance of A at " << this << endl;
    }
};

int main(int, char **)
{
    A a1;
    A a2;

    a1.SayHello();
    a2.SayHello();

    return 0;
}