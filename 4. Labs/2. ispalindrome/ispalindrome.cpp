// A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar. 
// Given an integer, write a function named is_palindrome that 
// returns true if the given number is a palindrome, else false. 
// For example, 12321 is palindrome, but 1451 is not palindrome.
// Here is an example call to the function
// cout << is_palindrome(12321); This example would return true.

#include <iostream>
using namespace std;

bool is_palindrome(int test);
int holder = 0;

int main() {
    int input;

    cout << "Enter the number to be tested: " << "\n";
    cin >> input;

    if (is_palindrome(input)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";  
    }

    return 0;
}

bool is_palindrome(int test) {
    if (test < 0) {
        return false;
    }
    else if (test == 0) {
        return true;
    }
    else {
        if (test == 0) {
            return 0;
        }
        holder = holder * 10 + test % 10;
        is_palindrome(test/10);
        if (holder == test) {
            return true;
        }
        else {
            return false;}
    }
}

// NON RECURSIVE SOLUTION
// bool is_palindrome(int test) {
//     if (test < 0 || (test % 10 == 0 && test != 0)) {
//         return false;
//     }

//     int reversed = 0;
//     while (test > reversed) {
//         reversed = reversed * 10 + test % 10;
//         test /= 10;
//     }

//     return test == reversed || test == reversed/10;
// }
