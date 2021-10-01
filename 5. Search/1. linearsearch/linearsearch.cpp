// A linear search algorithm. Search is given an array and its logical size, and a value that is being searched for
// The function returns an index where val first appears or -1 if val is not found
// E.g. if arr is [5, 8, 12, 7, 8, 10], then search(arr, 6, 8) should return 1
// E.g. if arr is [5, 8, 12, 7, 8, 10], then search(arr, 6, 4) should return -1

#include <iostream>
using namespace std;

int search(int arr[], int arrSize, int val);

int main() {
    int array[6] = {5, 8, 12, 7, 8, 10};
    cout << search(array, 6, 12) << endl;

    return 0;
}

int search(int arr[], int arrSize, int val) {
    int i;
    i = 0;
    while (i < arrSize) {
        if (arr[i] == val)
            return i;
        i++;
    }
    return -1;
}