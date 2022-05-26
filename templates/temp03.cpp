// Template and Inheritance
#include<iostream>
#include<string>
using namespace std;

template <class C, class U>
class School {
    public:
        C name;
        U estd;

    public:
        void printInfo() {
            cout<<"The informmation is:"<<endl;
            cout<<name<<"\t"<<estd<<endl;
            cout<<"The End...."<<endl;
        }
};


template <class C,class U>
class Samudhik: public School <C,U> {};



int main() {


    Samudhik<string,int> sc;
    sc.name = "Sulav";
    sc.estd = 2002;
    sc.printInfo();





    return 0; 
}