#include <iostream>
#include<string>
using namespace std;
int main()
{

    int a;
    try
    {
        cin>>a;
        if(a == 0) throw string("Error");
        if(a == 1) throw a;
        
        cout<<"A is: "<<a<<endl;

    }
    catch (string s)
    {
        cout<<s<<endl;
    }
    catch(int a) {
        cout<<"a is 1"<<endl;
    }

    return 0;
}