// Write a recursive implementation for the function printAscAndDesc
// The function should print the numbers from start to end in an ascending order, and then in descending order back to start. Assuming that start <= end.
// e.g. printAscending(3, 5) => 3 4 5 4 3

#include <iostream>
using namespace std;

void printAscAndDesc(int start, int end);

int main() {
    int firstNum;
    int lastNum;

    cout << "Enter the first and last numbers of the range: " << endl;
    cin >> firstNum >> lastNum;

    printAscAndDesc(firstNum, lastNum);

    return 0;
}

void printAscAndDesc(int start, int end) {
    if (start == end) {         // Base case: When n = 1
        cout << start << endl;  // solves the problem when n = 1
    }
    else {
        cout << start << endl;
        printAscAndDesc(start + 1, end); // Recursive step
        cout << start << endl;
    }
}