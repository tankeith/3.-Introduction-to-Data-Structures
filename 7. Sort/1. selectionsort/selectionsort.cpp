#include <iostream>
using namespace std;

int findIndexOfMin(int arr[], int low, int high);
void selectionSort(int arr[], int arrSize);

int main() {
    int lst[7] = {0, 1, 2, 18, 19, 20, 25};
    cout << binary_search(21, lst, 7) << "\n";
    return 0;
}

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

void selectionSort(int arr[], int arrSize) {
    int i, minIndex;

    for (i = 0; i < arrSize; i++) {
        minIndex = findIndexOfMin(arr, i, arrSize - 1);     // starts at index i, ends at last element
        swap(arr[i], arr[minIndex]);
    }
}