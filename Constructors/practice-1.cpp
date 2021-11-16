// Write a program to define a class Rational. Use constructor to initialize the values of data members of object (i.e num and denum) and display the rational number. Use appropriate member functions as required.
#include <iostream>
using namespace std;

class Rational
{
    int num,denum;

    public:
        Rational();
        int display();
};

int Rational::display()
{
    cout<<"num= "<<num<<endl<<"denum= "<<denum<<endl;
}

Rational::Rational()
{
    num=10;
    denum=20;
}

int main()
{
    Rational obj1;

    obj1.display();

    return 0;
}