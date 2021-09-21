// Basic workings of a pointer
// What is the value of x after the second cout? 100, 40, 20?
// Answer is 40

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int *ptr;
    ptr = &x;
    cout << *ptr << endl;   // prints 100

    *ptr = 20;
    x = 40;
    cout << *ptr << endl;   // prints 40

    return 0;
}