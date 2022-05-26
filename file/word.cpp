#include <iostream>
#include <fstream>
using namespace std;

int main()
{


    fstream obj;
    obj.open("hello.txt", ios::in);

    char garima[50];
    while(!obj.eof()) {
        obj>>garima;
        if(garima[0] == 'h') {
            cout<<garima;
        }
    }


    obj.close();

    return 0;
}