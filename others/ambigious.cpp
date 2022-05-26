#include<iostream>
using namespace std;

class A {
    public:
        void say() {
            cout<<"Helllooooo";
        }
};

class B {
    public:
        void say() {
            cout<<"Hiiiiiii";
        }
};

class C: public A, public B {
    
};

int main() {
    C c;
    c.say();  // ambigious which say() to call
    
    
    return 0;
}
