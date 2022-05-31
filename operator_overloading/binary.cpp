#include<iostream>
using namespace std;

class Binary {
    public:
        int a;
    public:
        void output() {
            cout<<a<<endl;
        }

        // plus operator overloading
        Binary operator + (Binary b) {
            Binary temp;
            temp.a = a + b.a;
            return temp;
        }
};


int main() {
    Binary b1;
    b1.a = 1;

    Binary b2;
    b2.a = 2;

    Binary b3 = b1 + b2;
    cout<<b3.a<<endl;

    return 0;
}