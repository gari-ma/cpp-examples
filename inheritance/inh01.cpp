// example showing use of access specifiers
#include <iostream>
using namespace std;
class Base
{
public:
    int a = 0;

private:
    int b = 0;

protected:
    int c = 0;
};

class child : public Base
{
public:
    void output()
    {
        // public can be accessed
        cout << "The value of a is: " << a << endl;
        // protected can be accessed from here
        cout << "The value of c is: " << c << endl;
        // provate can not be accessed from here
        //   cout<<"The value of b is: "<<b<<endl;
    }
};

int main()
{
    Base sulav;
    child garima;
    // this will run because public
    cout << sulav.a << endl;
    // this will not run because private and protected
    // can not be accessed from main
    //  cout<<sulav.b<<endl;
    // cout<<sulav.c<<endl;
    return 0;
}

/*
So now conclusion:

mode           from child class          from main
public            YES                       YES
protected         YES                       NO
private           NO                        No

*/