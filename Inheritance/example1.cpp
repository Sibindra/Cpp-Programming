#include <iostream>
using namespace std;

class Test
{
    private:
        int a;

    protected:
        int b;

    public:
        int c;
        int input();
        int display();

        int get_a()
        {
            return a;
        }
};

// this meaning that class XYZ is a child class to parent class Test
class XYZ:public Test
{
    private:
        int x;

    public:
        int sum();
        int result();
};

int Test::input()
{
    cout<<"Enter the values for a, b and c: "<<endl;
    cin>>a>>b>>c;

    return 0;
}

int Test::display()
{
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
    return 0;
}

// child class
int XYZ::sum()
{
    x=get_a()+b+c; //Inline function

    return 0;
}

int XYZ::result()
{
    cout<<endl<<"Sum= "<<x<<endl;
    return 0;
}

int main()
{
    // child class object
    XYZ obj; 

    obj.input();
    obj.display();
    obj.sum();
    obj.result();

    obj.c=100; //c is a public member
    cout<<endl<<"After the update on c"<<endl;

    obj.display();
}