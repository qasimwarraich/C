#include <stdio.h>

void swap(int *x, int *y){
    // Swapping pointers with a helper.
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void heapify(int a[], int r, int len){
    // r = last non leaf node.
    // Set current node to maximum and define lc and rc.
    int maximum = r;
    int lc = 2 * r + 1;
    int rc = 2 * r + 2;

    // Make sure children are still in range of the array and compare them to parent.
    if(lc < len && a[lc] > a[maximum]) maximum = lc;
    if(rc < len && a[rc] > a[maximum]) maximum = rc;
    // If the parent is not the maximum then swap the parent with bigger child and reheapify.
    // Notice what was previously a child becomes the new parent to be examined for heap condition.
    if(maximum != r) {
        swap(&a[r],&a[maximum]);
        heapify(a, maximum, len);
    }
}

void heapsort(int a[], int len){
    // Max Heap Build starting from last non leaf node. 
    for(int i = len/2  -1 ; i >= 0 ; i--) heapify(a, i, len);

    // Heapsort (Swap root with last leaf)
    for(int i=len-1; i>=0; i--){
        swap(&a[0],&a[i]);
        heapify(a,0,i);
    }
}

int main(){
    //Initialisation
    int array[] = {2,9,3,420,1,5,6};
    int len = sizeof(array)/sizeof(array[0]);

    heapsort(array,len);
   
    //Printing result
    for(int i =0; i < len; i++) printf(" %d\n",array[i]);

    return 0; 
}
