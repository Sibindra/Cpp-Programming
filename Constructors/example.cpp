#include <iostream>
using namespace std;

class Construct
{
    int x,y;

    public:
        Construct()
        {
            x=0;
           y=0;
        }

        int display()
        {
            cout<<"value of x= "<<x<<endl<<"value of y="<<y<<endl;
        }
};

int main()
{
    Construct obj;

    obj.display();

    return 0;
}