/* Write a program according to the specification given below:

- Create a class Account with data members acc no, balance, and min_balance(static)

-Include methods for reading and displaying values of objects

- Define static member function to display min_balance

-Create array of objects to store data of 5 accounts and read and display values of each object */

#include<iostream>
using namespace std;

class Account
{
    int acc_no;
    float balance;
    static float min_balance;
public:
    void read()
    {
        cout<<"Enter account no: ";
        cin>>acc_no;
        cout<<"Enter balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Account no: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    static void display_min_balance()
    {
        cout<<"Minimum balance: "<<min_balance<<endl;
    }
};

// yo ya bahira nai declare garna parchha hai class vitra pani haina, main vitra pani haina
float Account::min_balance=1000;

int main() {
    Account a[5];
    for(int i=0;i<5;i++)
    {
        a[i].read();
    }
    for(int i=0;i<5;i++)
    {
        a[i].display();
    }
    // static member access garna :: use garna parcha hai
    Account::display_min_balance();
    return 0;
}