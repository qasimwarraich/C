#include <stdio.h>


void rotate(int a[], int n, int m){
    if ( m == n || m == 0) return;
    m = m %n;
    for (int j=0; j<m; j++){
        int temp = *(a+n-1);
        for(int i=n-1; i>0; i--){
            *(a+i)=*(a+i-1);
        }
    *a = temp;
    }
    return;
}


int main(){

    int a[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int m = 10;
    rotate(a,n,m);
    for(int i=0; i<n; i++) printf("%d\n", *(a+i));

    return 0;
}

