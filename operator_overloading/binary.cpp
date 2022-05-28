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
            this->a = b.a;
            return *this;
        }
};


int main() {

    return 0;
}