// Given an integer that is the search target and an array of integers, write a function that returns the number of comparisons performed doing a linear search
// The function should take 3 arguments: the number searched for, the array of integers, the number of elements in the array
// If the target is not in the array then the function should return the maximum number of searches to determine the element is not in the array
// E.g. int lst[] = {19, 2, 20, 1, 0, 18};, printf("%i",linear_search(20, lst, 6)); ==> 3

#include <iostream>
using namespace std;

int linear_search(int search_value, int lst[], int elements);

int main() {
    int lst[6] = {19, 2, 20, 1, 0, 18};
    cout << linear_search(125, lst, 6) << "\n";
    return 0;
}

int linear_search(int search_value, int lst[], int elements) {
    int counter = 0;                        // tracks number of comparisons
    int i = 0;                              // index in while loop

    while (i <= elements) {
        if (lst[i] != search_value) {       // if there's no match
            counter++;                      // increase counter by 1
            i++;                            // move to next element
        }            
        else if (lst[i] == search_value) {  // if there's a match
            counter++;                      // increase counter by 1
            return counter;                 // return total counter
        }            
    }
    return elements;                        // if there's no match by the last element, return the total number of elements
}
