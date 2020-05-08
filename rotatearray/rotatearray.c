#include <stdio.h>

void RotateArray(int a[], int n, int m){
    if (m == 0 || m ==n) return;
    int b[n];


    for (int i = 0; i < n; i++){
        b[(i+m)%n] = a[i];
    }
    for (int j=0; j<n; j++) printf("%d\n", b[j]);
}

int main(){
    int a[6] = {1,2,3,4,5,6};
    int n = 6;
    RotateArray(a,n,100);



    return 0;
}
