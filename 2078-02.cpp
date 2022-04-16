/* Write a program that converts object of another distance class with data members feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch) */

#include<iostream>
using namespace std;



// step 1: Create a class [Distance] with feet and inch
class Distance {
    public:
    int feet, inch;
    
    public: 
    Distance(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
    }
    
    void display() {
        cout<<"Feet: "<<feet<<"\tInch: "<<inch<<endl;
    }
};


// Step 2: Create another class with meter and centimeter
class SecDistance {
    public:
    int m,cm;
    
    // overload the equalsTo operator to change the feet and inch to m and cm
    void operator = (Distance a) {
        m = a.feet * 3.3;
        cm = a.inch * 0.4;
    }


    void display() {
        cout<<"Feet: "<<feet<<"\tInch: "<<inch<<endl;
    }
    
};


int main() {
    Distance distance = Distance(2,3);
    distance.display();
    SecDistance secDistance;
    secDistance = distance;
    secDistance.display();
    return 0;
}