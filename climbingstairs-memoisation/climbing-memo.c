#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


int climbStairs(int n){
    int a[n+1];
    a[0]=1;
    a[1]=1;
    for (int i = 2; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}


int main(){
    
    
    return 0;
}

