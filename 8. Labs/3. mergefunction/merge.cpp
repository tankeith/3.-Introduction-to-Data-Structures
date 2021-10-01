// The merge sort algorithm uses a function to merge two subarrays into one sorted array. Write a merge function taking four parameters:
// - Array
// - Starting Index of first subarray
// - Ending Index of first subarray
// - Ending Index of second subarray
// Here is an example call to the function
// int lst[] = {0, 2, 1, 18, 20};
// merge(lst, 0, 1, 4);
// After the above code executes the array would look like this:
// {0, 1, 2, 18, 20};

void merge(int arr[], int left, int middle, int right) {
    int lowRightInd, size;
    int* mergedArr;                         // resultant dynamic array. has to be dynamic rather than static cos we don't know how many elements in all
    int indexRight, indexLeft, indexResult;
    int i, iArr;

    lowRightInd = middle + 1;          // final index of the array on the right
    size = right - left + 1;   // size of the entire combined array
    mergedArr = new int[size];  // allocate memory for dynamic array. we can't do merge in place because we'll be stepping on values we're not done working on

    indexLeft = left;
    indexRight = lowRightInd;
    indexResult = 0;                        // where we want to start writing the result of the merged array

    while (indexLeft <= middle && indexRight <= right){
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
    while (indexLeft <= middle) {     // when there's a tail in the left array
        mergedArr[indexResult] = arr[indexLeft];
        indexLeft++;
        indexResult++;
    }

    while (indexRight <= right) {                  // when there's a tail in the right array
        mergedArr[indexResult] = arr[indexRight];
        indexRight++;
        indexResult++;
        }

    // copy from merged array back into the original array
    for (i = 0, iArr = left; i < size; i++, iArr++)   // they start at different positions
        arr[iArr] = mergedArr[i];

    delete [] mergedArr;                                // delete memory allocation
}