/* . Write programs to add two object of distance class with data members feet and inch by using by using member function and friend function. */

#include<iostream>

using namespace std;

class Distance {
    public:
    int feet,inch;
    
    public:
    Distance(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
    }
    
    Distance operator+(Distance d1){
        return Distance(feet + d1.feet ,inch + d1.inch);
    } 
    
    
};


int main() {
    Distance dis1(10,11);
    Distance dis2(20,52);
    Distance dis3 = dis1 + dis2;
    
    cout<<"Distance dis3:"<<endl;
    cout<<"feet: "<<dis3.feet<<endl;
    cout<<"inch: "<<dis3.inch<<endl;
    
    
    return 0;
}