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
        cout<<"A is: "<<a<<endl;

    }
    catch (string s)
    {
        cout<<s<<endl;
    }

    return 0;
}