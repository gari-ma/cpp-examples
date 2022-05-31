#include<iostream>
using namespace std;

class Calc {
    private:
        int a,b;
    public:
        Calc(int a,int b) {
            this->a = a;
            this->b = b;
        }

        void sum() {
            cout<<"The sum is:"<<a+b;
        }

        ~Calc() {
            delete(&a);
            delete(&b);
        }

};

int main() {
    Calc c(1,2);
    c.sum();
    return 0;
}