#include<iostream>
using namespace std;
// overriding member function
class A {
    public:
    void test() {
        cout<<"From A"<<endl;
    }
};

class B:public A {
    public:
    void test() {
        cout<<"From B"<<endl;
    }
};


int main() {
    B b;
    b.test();  // from B
    b.A::test(); // from A
    return 0;
}