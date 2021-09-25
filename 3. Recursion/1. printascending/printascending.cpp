// Write a recursive implementation for the function printAscending
// The function should print the numbers from start to end in an ascending order. Assuming that start <= end.
// e.g. printAscending(1, 4) => 1 2 3 4
// Step 1: Base Case. Define what the input size is. 
// e.g. printAscending(7, 9) will give 7 8 9 so n = 3, printAscending(5, 5), n = 1
// Solve the problem for the smallest input. that is when start == end.
// Step 2: Define the inductive hypothesis. Assume that when calling the function on a smaller input it does its job
// "Assume that if we call printAscending() on a smaller range, it will print the numbers in that range in ascending order"
// Variation 1: printAscending(start + 1, end);
// Variation 2: cout << start << endl;
//              printAscending(start + 1, end)
// Variation 3: mid = (start + end) / 2;
//              printAscending(start, mid);
//              printAscending(mid + 1, end);

#include <iostream>
using namespace std;

void printAscending(int start, int end);

int main() {
    int firstNum;
    int lastNum;

    cout << "Enter the first and last numbers of the range: " << endl;
    cin >> firstNum >> lastNum;

    printAscending(firstNum, lastNum);

    return 0;
}

void printAscending(int start, int end) {
    if (start == end) {         // Base case: When n = 1
        cout << start << endl;  // solves the problem when n = 1
    }
    else {
        printAscending(start, end - 1); // Recursive step
        cout << end << endl;
    }
}