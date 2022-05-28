#include<iostream>
using namespace std;
class Base {
    public:
    Base() {
        cout<<"Constructor from Base"<<endl;
    }
    virtual ~Base() {
        cout<<"Destructor from Base"<<endl;
    }
};

class Derived : public Base {
    public:
    Derived() {
        cout<<"Constructor from Derived"<<endl;
    }
    ~Derived() {
        cout<<"Destructor from Derived"<<endl;
    }
};
int main() {
    Base *base = new Base();
    delete base;
    cout<<"---------------------------"<<endl;
    Derived *derived = new Derived();
    delete derived;
    cout<<"---------------------------"<<endl;
    Base *d = new Derived();
    delete d;
    
    return 0;
}

