#include<iostream>
using namespace std;
// overriding member function
class A {
    public:
    void test() {
        cout<<"From A"<<endl;
    }
};

class B {
    public:
    void test() {
        cout<<"From B"<<endl;
    }
};

class C:public A, public B {
    
};


int main() {
    C c;
    // c.test();  // ambigious error , don't know which test to call
    c.A::test(); // from A
    c.B::test(); // from B
    return 0;
}