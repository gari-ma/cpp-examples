#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream obj;
    obj.open("hello.txt", ios::in);

    char garima[80];
    int a = 0;
    while(!obj.eof())
    {
        obj.getline(garima,80);
        a++;
    }



    cout <<"The length is: "<<a<< endl;


    obj.close();

    return 0;
}