#include<iostream>
#include<string>

using namespace std;

class BankAccount {
    private:
        string name;
        int acc_no;
        int acc_type;
        int balance = 0;

    public:
         void assign() {
             cout<<"Name: ";
             cin>>name;
             cout<<"Acc No: ";
             cin>>acc_no;
             cout<<"Acc type: ";
             cin>>acc_type;
         }   

         void deposit(int j) {
             balance += j;
         }

         void withdraw(int j) {
             balance -= j;
         }

         void check() {
             cout<<"Balance: "<<balance<<endl;
             cout<<"Name: "<<name;
         }
};

int main() {
    BankAccount b;
    b.assign();

    b.check();
    b.deposit(1000);

    b.check();
    b.withdraw(50);
    b.check();
    return 0;
}