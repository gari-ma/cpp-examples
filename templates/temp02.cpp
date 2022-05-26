#include<iostream>
using namespace std;

template <class T>
class DateTime {
    private:
        T time;
    public: 
        DateTime(T time) {
            this->time = time;
        }

        void tick() {
            time++;
        } 

        T getTime(){
            return time;
        }
};

int main() {
    DateTime<int> *dt = new DateTime<int>(5);
    // or can be declared as
    //DateTime<int> dt(5);
    cout<<dt->getTime()<<endl;
    dt->tick();
    cout<<dt->getTime()<<endl;

    return 0;
}