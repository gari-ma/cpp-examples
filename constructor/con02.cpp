#include<iostream>
using namespace std;


class Hello {
    public:
    int a;
    int b;

    public:
    //   Hello() {
    //     //   cout<<"Enter the f and s n:";
    //     //   cin>>a>>b;
    //     a=1;
    //     b=2;
    //   }

    Hello(int x,int y) {
        a=x;
        b=y;
    }

    // Hello(int a,int b) {
    //     this->a=a;
    //     this->b=b;
    // }

      void sum() {
          cout<<"Sum is :"<<a+b;
      }
};



int main() {
    Hello h1(1,2);
    h1.sum();
    return 0;
}