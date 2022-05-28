// container ship
// using class inside another class

#include<iostream>
using namespace std;

class A {
    public:
     void hehe() {
         cout<<"Hehe"<<endl;
     }
};

class B {
    A a;
    public:
        void huhu() {
            a.hehe();
            cout<<"hehe"<<endl;
        }
};

int main() {
    B b;
    b.huhu();
    return 0;
}