#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void mergeSort(int arr[], int low, int high);   // low and high define range of elements we want to sort
void merge(int arr[], int lowLeftInd, int highLeftInd, int highRightInd);

int main() {
    int arr[8] = {14, 5, 8, 10, 13, 1, 18, 3};
    int arrSize = 8;
    
    mergeSort(arr, 0, arrSize - 1);
    printArray(arr, arrSize);

    return 0;
}

void printArray(int arr[], int arrSize) {           // iterates over all the elements and prints them one by one with blank
    int i;

    for (i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void mergeSort(int arr[], int low, int high) {
    int mid;

    if (low == high)
        return;
    else {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);   // sorts first half of the array
        mergeSort(arr, mid + 1, high);   // sorts second half of the array
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int lowLeftInd, int highLeftInd, int highRightInd) {
    int lowRightInd, size;
    int* mergedArr;                         // resultant dynamic array. has to be dynamic rather than static cos we don't know how many elements in all
    int indexRight, indexLeft, indexResult;
    int i, iArr;

    lowRightInd = highLeftInd + 1;          // final index of the array on the right
    size = highRightInd - lowLeftInd + 1;   // size of the entire combined array
    mergedArr = new int[size];  // allocate memory for dynamic array. we can't do merge in place because we'll be stepping on values we're not done working on

    indexLeft = lowLeftInd;
    indexRight = lowRightInd;
    indexResult = 0;                        // where we want to start writing the result of the merged array

    while (indexLeft <= highLeftInd && indexRight <= highRightInd){
        if (arr[indexLeft] < arr[indexRight]) {
            mergedArr[indexResult] = arr[indexLeft];
            indexLeft++;
            indexResult++;
        }
        else {
            mergedArr[indexResult] = arr[indexRight];
            indexRight++;
            indexResult++;
        }
    }
    // deal with the remaining tails
    while (indexLeft <= highLeftInd) {     // when there's a tail in the left array
        mergedArr[indexResult] = arr[indexLeft];
        indexLeft++;
        indexResult++;
    }

    while (indexRight <= highRightInd) {                  // when there's a tail in the right array
        mergedArr[indexResult] = arr[indexRight];
        indexRight++;
        indexResult++;
        }

    // copy from merged array back into the original array
    for (i = 0, iArr = lowLeftInd; i < size; i++, iArr++)   // they start at different positions
        arr[iArr] = mergedArr[i];

    delete [] mergedArr;                                // delete memory allocation
}