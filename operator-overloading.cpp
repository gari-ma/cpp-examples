/*
Demo on unary operator overloading
@ npgarima
@ 1648786356
*/


#include<iostream>
using namespace std;

class Hello
{
public:
  int a;
public:
    Hello ()
  {
    a = 5;
  }

  void operator ++ ()
  {
    a = a + 100;
  }

};

int main ()
{
  Hello hello;
  ++hello;
  cout << hello.a;
}
