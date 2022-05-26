// function template sp[eciualization
#include<iostream>
#include<string>
using namespace std;

template <class T>
T sum(T a,T b) {
    return a+b;
}

string sum(char a,char b) {
    return "Illegal Expression!"; 
}


int main() {
    float s = sum(1.2,5.5);
    cout<<s<<endl;



    string ssz = sum('a','n');
    cout<<ssz<<endl;
    return 0;
}