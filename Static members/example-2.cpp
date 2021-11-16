//Static member variables in class

#include <iostream>
 
using namespace std;
 
class Example{
     
    static int x;
     
public:
     
    void function1(){
        x++;
    }
     
    void function2(){
        cout<<"x = "<<x<<endl;
    }
     
};
 
int Example :: x;
 
int main()
{
    Example obj1, obj2, obj3;
     
    cout<<"Initial value of x" <<endl;
     
    obj1.function2();
    obj2.function2();
    obj3.function2();
     
    obj1.function1();
    obj2.function1();
    obj3.function1();
     
    cout<<"Value of x after calling function1"<<endl;
     
    obj1.function2();
    obj2.function2();
    obj3.function2();
     
 
    return 0;
}