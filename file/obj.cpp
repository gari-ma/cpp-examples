#include<iostream>
#include<fstream>

using namespace std;

class Distance {
    public:
    int length;
    int breadth;

    public:
    void set(int l, int b){
        length = l;
        breadth = b;
    }
};

int main() {

    Distance co;
    co.set(1,2);


    fstream obj;
    obj.open("hello.txt",ios::binary);


    // write
    obj.write((char*) &co, sizeof(co));

    // read
    obj.read((char*) &co, sizeof(co));
    cout<<co.length<<endl<<co.breadth;

    return 0;
}