/* Write a program that read values of two objects of student class(assume data members are sid , sname, and level) and display the data in monitor. */

#include<iostream>

using namespace std;

class Student {
    private:
        int sid;
        char sname[50];
        int level;
        
    public:
        Student() {
            cout<<"Enter the Student id: ";
            cin>>sid;
            
            cout<<"Enter the Student name: ";
            cin>>sname;
            
            cout<<"Enter the student level: <1,2,3,..>: ";
            cin>>level;
        }
        
        void display() {
            cout<<"The current user info: "<<endl;
            cout<<"student id"<<sid<<endl;
            cout<<"Student name: "<<sname<<endl;
            cout<<"Student level: "<<level<<endl;
        }
};

int main() {
    // two student so 
    Student std;
    std.display();
    
    
    Student std2;
    std2.display();
    
    
    return 0;
}