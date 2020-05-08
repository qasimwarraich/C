#include <stdio.h>


int isMaxheap(int a[], int i, int n){
    if(i  > (n-2)/2) return 1; 
    
    int lc = i *2 +1;
    int rc = i *2 +2;
    int sku = 0;
    int spam = 0; 
    printf("%d, %d (lc,rc)\n", lc, rc);
    if (a[lc] < a[i] ){
        sku = isMaxheap(a, lc, n);
    }
    if (a[rc] < a[i] ){
        spam= isMaxheap(a, rc, n);
    }
   
    return sku  && spam; 
       }

int main(){
    int array[] = {5,4,3,2,1};
    int len = 5;
    int pd = isMaxheap(array, 0, 5);
    printf("%d\n",pd);


    return 0;
}
