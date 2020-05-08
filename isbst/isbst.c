#include <stdio.h>



int isBst(int a[], int i, int n){

    int lc = (2*i) +1;
    int rc = (2*i) +2;
    int sku = 0;
    int spam = 0; 
        printf("%d \n", i);
  

    if (i > ((n-2)/2)) {
        return 1;
    }
    if (a[lc] < a[i]){
        printf("%d \n", lc);
        printf("we in here\n");
        spam = isBst(a,lc,n); 
    }
    else{
        return -1;
    }


    if (a[rc] > a[i] ){
       sku = isBst(a, rc,n);
    }
    else{
        return -1;
    }
    return spam && sku;
    
    }

int main(){

    int array[7] ={10,5,15,13,7,13,20};
    int len = 7;

    int spam = isBst(array,0,len);
    printf("%d\n",spam);
    return 0;
}
