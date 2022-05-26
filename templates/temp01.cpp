#include<iostream>
using namespace std;

// template function example
template <class T>
T sum(T a,T b) {
    return a+b;
}

int main() {
    int s = sum(5,6);
    cout<<s<<endl;

    float ss = sum(5.2,6.5);
    cout<<ss<<endl;
    return 0;
}