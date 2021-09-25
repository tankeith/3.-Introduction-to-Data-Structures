// Write a function that takes a parameter that is an integer named numDoubles
// Create a dynamic array that can store numDoubles doubles
// and make a loop that fills in each array entry with the value of the element number (starting with 1) divided by 3
// Return the array from the function
// Sample: numDoubles = 4 => [0.3333, 0.6666, 1, 1.3333], ie, 1/3, 2/3, 3/3, 4/3

#include <iostream>
using namespace std;

double* getDoubles(int numDoubles);

int main() {
    int num = 4;
    getDoubles(num);
}

double* getDoubles(int numDoubles){
    double* array = new double[numDoubles];
    for (int i = 0; i < numDoubles; i++) {
        array[i] = ((i+1.0)/3.0);
        // cout << array[i] << "\n";
    }        
    return array;
    delete[] array;
}