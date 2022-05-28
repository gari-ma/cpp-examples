#include<iostream>
using namespace std;

// pure virtual function and Abstrctions
class Base {
    public:
    // the 0 doesnot means assignment of 0 to the 
    // function
    // its just a specification of telling compiler
    // that this is a virtual fns
    virtual void getData() = 0;
};

class Derived: public Base {
    public:
    // now we have to override the class as 
    // it is a abstract class
    void getData() {
        cout<<"hug you!"<<endl;
    }
};

int main() {
    Derived d;
    d.getData();
    // or 
    Base *b = new Derived();
    b->getData();
    return 0;
}