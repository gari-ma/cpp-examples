
 #include<iostream>
 using namespace std;
 
 // Create a class Teacher with data members tid & subject and member functions for reading and displaying data members.
  class Teacher {
      private:
      int tid;
      char subject[10];
      
      public:
        void readTeacher() {
            cout<<"Enter the teacher Id and Subject: ";
            cin>>tid>>subject;
            cout<<endl;
        }
        void displayTeacher() {
            cout<<"Teacher Info"<<endl;
            cout<<"Teacher Id: "<<tid<<endl;
            cout<<"Subject: "<<subject<<endl;
        }
  };
  
  
// Create another class Staff with data members sid & position, and member function for reading and displaying data members.
 class Staff {
     private:
     int sid;
     char position[10];
     public:
        void readStaff() {
            cout<<"Enter the staff Id and position: ";
            cin>>sid>>position;
            cout<<endl;
        }
        void displayStaff() {
            cout<<"Staff Info"<<endl;
            cout<<"Staff Id: "<<sid<<endl;
            cout<<"Position: "<<position<<endl;
        }
 };
 
 
 
// Derive a class Coordinator from Teacher and Staff and the class must have its own data member department and member functions for reading and displaying data members.

class Coordinator : public Teacher, public Staff {
    private:
        char department[20];
        
        
    public:
       void readCoordinator() {
             cout<<"Enter the Coordinator Department: ";
            cin>>department;
            cout<<endl;
       }
       
       void displayCoordinator() {
            cout<<"Coordinator Info"<<endl;
            cout<<"Coordinator department: "<<department<<endl;
       }
};


//  Create two object of Coordinator class and read and display their details.

int main() {
    
    // one object
    Coordinator c;
    c.readTeacher();
    c.readStaff();
    c.readCoordinator();
    c.displayTeacher();
    c.displayStaff();
    c.displayCoordinator();
    
    // second object
    Coordinator c2;
    c2.readTeacher();
    c2.readStaff();
    c2.readCoordinator();
    c2.displayTeacher();
    c2.displayStaff();
    c2.displayCoordinator();
    
    return 0;
} 