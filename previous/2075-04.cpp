/* Write a member function called reverseit() that reverses a string
 ( an array of character).
  Use a for loop that swaps the first and last characters,
   then the second and next-to last characters and so on.
    The string should be passed to reverseit() as an argument. */

#include<iostream>
#include<string>

using namespace std;

class Helper {

 public:

    // string lai args ma halda jaile & lagauna parchha
    void reverseit(string &str) {

        // ya dekhy uta chai reverse garne hoo
        int len = str.length();
        for (int i = 0; i < len / 2; i++) {
        // ek choti ma 2 ta swap hune le garda len/2 bhako ho
           swap(str[i], str[len - i - 1]);
        }

        // yo chai output deko ho
        cout << str << endl;
    }
};

int main() {
    Helper h;
    string str = "Hello World";
    h.reverseit(str);
    return 0;  
}