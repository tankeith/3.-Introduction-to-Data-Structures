// The selection sort function uses a function to swap the position of two elements in the array. Write the swap function for an integer selection sort.
// e.g. int lst[] = {19, 2, 20, 1, 0, 18};, swap(&lst[0], &lst[1]) ==> {2, 19, 20, 1, 0, 18} (first two elements are swapped)

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}