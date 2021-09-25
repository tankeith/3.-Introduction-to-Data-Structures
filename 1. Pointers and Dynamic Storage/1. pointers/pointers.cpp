// Basic workings of a pointer
// What is the value of x after the second cout? 100, 40, 20?
// Answer is 40

#include <iostream>
using namespace std;

int main() {
    int x = 100;            // initialize x with value of 100
    int* ptr = nullptr;     // create pointer
    ptr = &x;               // set pointer to the address of x
    cout << *ptr << endl;   // prints 100. Not the same as cout << ptr; which gives the address of what ptr is pointing to
    cout << ptr << endl;    // prints out address of ptr

    *ptr = 20;              // changes value of x to 20 via pointer
    x = 40;                 // reassigns value to x
    cout << *ptr << endl;   // prints 40

    return 0;
}