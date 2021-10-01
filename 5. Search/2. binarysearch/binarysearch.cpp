// A binary search algorithm. Search is given a SORTED array and its logical size, and a value that is being searched for
// The function returns an index where val first appears or -1 if val is not found
// E.g. if arr is [5, 8, 12, 7, 8, 10], then search(arr, 6, 8) should return 1
// E.g. if arr is [5, 8, 12, 7, 8, 10], then search(arr, 6, 4) should return -1

#include <iostream>
using namespace std;

int binarySearch(int arr[], int arrSize, int val);

int main() {
    int array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    cout << binarySearch(array, 10, 13) << endl;

    return 0;
}

int binarySearch(int arr[], int arrSize, int val) {
    int low, high, mid;
    int index;
    bool found;
    low = 0;
    high = arrSize - 1;
    found = false;

    while ((found == false) && (low <= high)) {
        mid = (low + high) / 2;
        if (arr[mid] == val) {
            index = mid;
            found = true;
        }
        else if (val < arr[mid])
            high = mid - 1;         // rule out values on the right
        else                        // val > arr[mid]
            low = mid + 1;
        }
    if (found == true)
        return index;
    else
        return -1;
}