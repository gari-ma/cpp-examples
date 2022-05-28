#include <iostream>
#include<string>
using namespace std;
int main()
{

    int a,b,c;
    try
    {
        cout<<"Enter two number: ";
        cin>>a>>b;
        if(a == 0) throw string("Error");
        if(a == 1) throw a;
        
        c = a/b;
        cout<<"The result is: "<<c;

    }
    catch (string s)
    {
        cout<<"string error"<<endl;
    }
    catch(int a) {
        cout<<"int error"<<endl;
    }

    return 0;
}