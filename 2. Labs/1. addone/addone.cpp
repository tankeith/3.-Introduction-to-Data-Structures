// Pass by pointer as done in C (which in practice would be simpler to do with C++'s reference parameter syntax)
// Complete the function so it adds 1 to the int referenced by ptrNum
// Write a main function where an integer variable is defined, give in an initial value, call addOne, and output the variable
// It should be incremented by 1

#include <iostream>
using namespace std;

void addOne(int* ptrNum);

int main() {
    int num = 3;
    cout << "value of num before function: " << num << endl;

    addOne(&num); // get memory address of num
    cout << "value of num after function: " << num << endl;

    return 0;
}

void addOne(int *ptrNum) {  // passed into function as a pointer
    *ptrNum = *ptrNum + 1;
}
