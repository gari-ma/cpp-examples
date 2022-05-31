// virtual base class
#include<iostream>

// ambuigity in multipath inheritance
// can be solved by using virtual base class
// 
using namespace std;

class A {
    public:
        int a = 1;
};

class B: virtual public A{};

class C: virtual public A {};

class D: public B,public C {};

int main() {
    D d;
    cout<<d.a;
    return 0;
}