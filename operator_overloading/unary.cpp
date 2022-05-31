#include<iostream>

using namespace std;

class Rectangle {
    public:
        int a;
    public:
        void output() {
            cout<<a<<endl;
        }

        Rectangle operator - () {
            // negation operator
            Rectangle tmp;
            tmp.a = a-1;
            return tmp;
        }

        void operator ++ () {
            // prefix operator
            a++;
        }
};

int main() {
    Rectangle r;
    r.a = 1;
    r.output();
    
    
    
    ++r;   /// similar to r.++()   
    r.output();
    

    r = -r; /// similar to r.-()
    r.output();

    

    return 0;
}