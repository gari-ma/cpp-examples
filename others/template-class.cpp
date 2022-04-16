
#include <iostream>
using namespace std;
 template <class T> class addn{
    private:
    T x,y;
    public:
    void get(T a,T b){
        x= a;
        y=b;
    }
     void show(){
         T s= x+y;
         cout<<s;
      }
 };
 
 int main(){
     addn<int> obj;
     obj.get(1,2);
     obj.show();
     
     addn<float> obj2;
     obj2.get(1.33,2.25);
     obj2.show();
     return 0;
 }
