// Dynamically resize an array on the heap. Represents the underlying workings of a vector.
// Starts off with simple array with size of 10 which is full, and we want to add one more element, 110, into an array which can hold 20 elements.
// Inputs: arr (the array), size (current size), newSize (new size)
// resizeArray grows the array into its new size
// resizeArray: creates temporary new array of desired size, copy over each of the individual elements, and delete them from the old array, and make it point to the temporary array. The effect of that is the array has been resized.
// Because resizeArray takes many steps, we want to set newSize to a much larger size so the operation doesn't need to be repeated
// Line 11 *&: A point to an address allows the address to be changed, while if it is just an address, we can only change the value at the address.

#include <iostream>
using namespace std;

void resizeArray(int *&arr, int currentSize, int newSize) { // arr will change in the resizing, so we need to use pass the pointer by reference
    int* temp = new int[newSize]; // create temporary pointer on the heap pointing to an array of size newSize. temp points to an array of 
    for (int i = 0; i < currentSize; i++) // copy all the elements of the old array into the new array one by one
        temp[i] = arr[i]; // we now have two identical arrays except that arr is full and temp has extra space
    delete [] arr; // delete old array to prevent memory leak or garbage on the leap. Cleans up memory space pointed to by arr, which is fine because a copy is in temp
    arr = temp; // pass temp array in by reference by making arr = temp
}  

int main() {
    int size = 10;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i * 10;
    int oneMore = 110; // new element to fill into array
    int newSize = size * 2;
    resizeArray(arr, size, newSize);
    arr[size + 1] = oneMore; // put new element 110 into the 11th index [size + 1]
    size = newSize; // update size with the newSize
    cout << arr[11] << endl;

    return 0;
}