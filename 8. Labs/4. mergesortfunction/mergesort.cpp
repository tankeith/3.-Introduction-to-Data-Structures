// Write the merge sort algorithm using the merge function developed in the previous problem. You should not upload the merge function but you must call the merge function to receive credit for the problem. You should include a header file named cpluspluslabs.h that has the signature of the merge function. The merge sort function should take three parameters
// - Array to sort
// - Left Index to start of data
// - Right Index to end of data

// Here is an example call to the function
// int lst[] = {19, 2, 20, 1, 0, 18};
// merge_sort(lst, 0, 5);
// After the above code executes the array would look like this:
// {0, 1, 2, 18, 19, 20}

#include "cpluspluslabs.h"

void merge_sort(int arr[], int left, int right) {
    int mid;

    if (left == right)
        return;
    else {
        mid = (left + right) / 2;
        merge_sort(arr, left, mid);   // sorts first half of the array
        merge_sort(arr, mid + 1, right);   // sorts second half of the array
        merge(arr, left, mid, right);
    }
}