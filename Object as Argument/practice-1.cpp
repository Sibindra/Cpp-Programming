// Write a program to define class Distance with data members feet and inches of appropriate type. Define member function of the class which accepts two objects of the class and adds them.
#include <iostream>
using namespace std;

class Distance
{
    int feet,inches;

    public:
        int input();
        int display();
        int add(Distance d1,Distance d2);
};

int Distance::input()
{
    cout<<"Enter the feets in the height:";
    cin>>feet;
    cout<<"Enter the inches:";
    cin>>inches;
}

int Distance::display()
{
    cout<<feet<<" feets and "<<inches<<" inches"<<endl;
}

int Distance::add(Distance d1,Distance d2)
{
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
}

int main()
{
    Distance obj1,obj2,obj3;

    cout<<"Enter the first height:"<<endl;
    obj1.input();
    cout<<endl<<"Enter the second height:"<<endl;
    obj2.input();

    obj3.add(obj1,obj2);
    obj3.display();

    return 0;
}