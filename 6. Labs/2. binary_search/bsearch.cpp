// Given an integer an a sorted array of integers, write a function that prints the number of comparisons performed doing a binary search
// The function should take 3 arguments: the number searched for, the array of integers, the number of elements in the array
// If the number searched for is not in the array, then the function should return the maximum number of searches to determine that
// E.g. int lst[] = {0, 1, 2, 18, 19, 20, 25}, printf("%i",binary_search(20, lst, 7)) ==> 2

#include <iostream>
using namespace std;

int binary_search(int search_value, int lst[], int elements);

int main() {
    int lst[7] = {0, 1, 2, 18, 19, 20, 25};
    cout << binary_search(21, lst, 7) << "\n";
    return 0;
}

int binary_search(int search_value, int lst[], int elements) {
    int counter;                            // tracks number of comparisons
    int low, high, mid;                     // indexes of the high, low and middle of the array                              
    bool found;

    counter = 0;
    low = 0;
    high = elements - 1;
    found = false;
    
    while ((found == false) && (low <= high)) {
        mid = (low + high) / 2;
        if (lst[mid] == search_value) {
            counter++;
            found = true;
            return counter;
        }
        else if (search_value < lst[mid]) {
            counter++;
            high = mid - 1;
        }
        else {
            counter++;
            low = mid + 1;
        }
    }
    if (found == true) {
        counter++;
        return counter;
    }
    else
        return counter;
}
