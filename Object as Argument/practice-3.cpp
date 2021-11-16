// Write a program to define a class named Time with data members hours, minutes and seconds. Use appropriate member function of the class which accepts two objects of the class and adds them
#include <iostream>
using namespace std;

class Time
{
    int hr,min,sec;

    public:
        int input();
        int display();
        int add(Time t1,Time t2);
};

int Time::input()
{
    cout<<"Enter the hours minutes and seconds:"<<endl;
    cin>>hr>>min>>sec;
}

int Time::display()
{
    cout<<hr<<" Hours "<<min<<" Minutes "<<sec<<" Seconds."<<endl;
}

int Time::add(Time t1,Time t2)
{
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min+(sec/60);
    hr=t1.hr+t2.hr+(min/60);
    min=min%60;
    sec=sec%60;
}

int main()
{
    Time obj1,obj2,obj3;

    cout<<"Enter the first time:"<<endl;
    obj1.input();
    cout<<"Enter the second time:"<<endl;
    obj2.input();
    cout<<endl;
    obj3.add(obj1,obj2);
    obj3.display();
}