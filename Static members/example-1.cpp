//Static variables:same copy of output is used every time in another operation of same variable

#include <iostream>
using namespace std;

void Test()
{
    static int x=1; //static variable declaration
    ++x;            //increment of x

    int y=1;
    ++y;

    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
}

int main()
{
    Test();
    Test();

    return 0;
}