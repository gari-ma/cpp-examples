#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream obj;
    obj.open("hello.dat", ios::in);

    char garima;
    int a = 0;
    while(!obj.eof())
    {
        obj.get(garima);
        if(garima == 'a' || garima=='e' || garima=='i' || garima == 'o' || garima == 'u'){
            a++;
        }
    }


    cout <<"The length is: "<<a<< endl;

    obj.close();

    return 0;
}