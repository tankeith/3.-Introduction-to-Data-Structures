// Write the selection sort algorithm using the swap function developed in the previous problem. You should not upload the swap function but you must call the swap function to receive credit for the problem. You should include a header file named cpluspluslabs.h that has the signature of the swap function.
// E.g. int lst[] = {19, 2, 20, 1, 0, 18};
// selection_sort(lst, 6);
// ==> {0, 1, 2, 18, 19, 20}

#include "cpluspluslabs.h"

int findIndexOfMin(int arr[], int low, int high) {
    int min, minIndex;
    int i;

    min = arr[low];
    minIndex = low;

    for (i = low + 1; i <= high; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void selection_sort(int arr[], int elements) {
    int i, minIndex;

    for (i = 0; i < elements; i++) {
        minIndex = findIndexOfMin(arr, i, elements - 1);     // starts at index i, ends at last element
        swap(&arr[i], &arr[minIndex]);
    }
}