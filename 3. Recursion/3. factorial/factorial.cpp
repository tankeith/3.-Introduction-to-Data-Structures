// Write a recursive implementation for the factorial function
// Given a positive integer n, the function returns n!
// E.g. factorial(4) => 24

#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int input;

    cout << "Enter a value for n: " << endl;
    cin >> input;

    cout << "The factorial of " << input << " is " << factorial(input) << endl;

    return 0;
}

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}