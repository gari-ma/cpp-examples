#include<iostream>
#include<fstream>

using namespace std;

int main() {
    // yesko copy garne
    fstream f1;
    f1.open("hello.txt",ios::in);

    // yesma copy garne
    fstream f2;
    f2.open("two.txt",ios::out);


    char ch;
    while(!f1.eof()) {
        f1.get(ch);
        f2<<ch;
    }


    f1.close();
    f2.close();




    return 0;
}