#include <stdio.h>

void swap(int* x,int* y){
    int t = *x;
        *x = *y;
        *y = t;
}

int main(){
    int a = 2;
    int b = 3;
    int *pa = &a;
    int *pb = &b; 
    printf("\n %d, A\t%d, B\n",a,b);
    swap(pa, pb);
    printf("\n %d, A\t%d, B\n",a,b);
    return 0;
}
