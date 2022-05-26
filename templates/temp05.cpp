// class template specialization
#include<iostream>
#include<string>

using namespace std;


template<class T>
class Hehe {
    public:
        T h;

    public:
        T getHehe() {
            return h;
        }

};

// special class for char
template<>
class Hehe<char> {
    public:
        char h;

    public:
        char getHehe() {
            return 'l';
        }

};


int main() {
    Hehe<char> h;
    h.h = 'a';
    cout<<h.getHehe()<<endl;
    return 0; 
}