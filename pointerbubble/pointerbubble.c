#include <stdio.h>


    // Bubble Sort implemented with pointers. 
void pbsort(int* ptr, int l){
    for(int i=0; i<l; i++){
        for(int j=0; j<l-1-i; j++){
            if(*(ptr +j) > *(ptr +j +1)){
            int t = *(ptr +j +1);
            *(ptr+j+1) = *(ptr +j);
            *(ptr+j) = t;
            }
        }
    }
    for(int i=0; i<l; i++){printf(" %d, Sorted Array w/ pointer(%p)\n", *(ptr +i), (ptr +i));} 
}

int main(){
    int a[] = {3,3,1,5,6};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d This is len \n\n",len);
    
    // Testing some pointer math. 
    int* ap = a;
    int spam = *(ap +3);
    printf("%p, apointer\n", ap);
    printf("%d, spampointer (ap+3)\n\n",spam);

    // Formatting and printing original array old school away. Note: Array name as pointer.
    for(int i=0; i<len; i++){printf(" %d, Original Array w/ pointer(%p).\n",a[i],(a+i));} 
    for(int i=0; i<3;i++){printf("--\n");} 
    
    // The names of arrays are already pointers to a[0]. We can pass just a as our sort pointer.
    pbsort(a,len);
    return 0;
}
