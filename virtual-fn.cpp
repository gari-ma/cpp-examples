#include<iostream>
using namespace std;

class Human {
    public:
     virtual void run() {
        cout<<"Running"<<endl;
    }
    
     void eat() {
        cout<<"eat"<<endl;
    }
};

class Hari: public Human {
    public:
    void run() {
        cout<<"No Leg"<<endl;
    }
};

int main() {
    Hari gari;
    Human *hm = &gari;
    hm->run();
    hm->eat();
    return 0;
}