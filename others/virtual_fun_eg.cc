#include<iostream>
using namespace std;
 class utensil{
   
   public: 
   virtual void wash(){
       cout<<"washing"<<endl;
   }
   void keep(){
       cout<<"keeping"<<endl;
   }
 };
 class vada: public utensil{
     public:
     void wash(){
         cout<<" majdina"<<endl;
     }
     };
    int main(){
        vada f;
        utensil *gari = &f;
        gari->wash();
        gari->keep();
        return 0;
     }
