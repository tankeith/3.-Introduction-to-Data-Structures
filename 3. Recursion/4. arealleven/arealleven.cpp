// Write a recursive implementation for the following function. 
// Given an array of integers arr and its logical size n, the function returns true if all of arr's elements are even.

#include <iostream>
using namespace std;

bool areAllEven(int arr[], int n);

int main() {
    int array[5] = {0, 2, 6, 4, 10};
    int size = 5;

    if (areAllEven(array, size) == true) {
        cout << "All are even" << endl;
    }
    else {
        cout << "Not all are even" << endl;
    }

    return 0;
}

bool areAllEven(int arr[], int n) {
    bool result;

    if (n == 1) {        // Base case when there's only one element in the array
        return (arr[0] % 2 == 0);
    }
    else {
        result = areAllEven(arr, n - 1);
        if (result == true) {
            return (arr[n-1] % 2 == 0); // check the last element
        }
        else {
            return false;
        }
    }
}