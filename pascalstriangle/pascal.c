/*                                              
------------------------------------------------  
  author      : Q (qasim.warraich@gmail.com)            
  created     : 06/05/2020                       
  filename    : pascal.c                       
------------------------------------------------  
*/                                                    

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


//Factorial function, recursive multiplication of number with predecessor.
//__int128 is to keep accuracy when dealing with larger factorials.
__int128 factorial(int x){
    if (x==0) return 1;
    return x * factorial(x-1);
}
//n CHOOSE k, Combinations formula will help us yield our triangle. 
int choose(int n, int k){
    return factorial(n)/((factorial(k))*(factorial(n-k)));
}
//Prints the  nth row of pascals triangle (n is row, i is column);
void nthpascalrow(int n){
    for (int i = 0; i <= n; i++)printf("%d ",choose(n,i));
    printf("\n");
}
//Prints pascals triangle till the nth row, outer loop dictates current row with i
//and inner loop prints (0 .. i) combinations with i as row and j as column. 
void nthpascaltriangle(int n){
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++)printf("%d ",choose(i,j));
        printf("\n");
    }
}

int * nthrowasarray(int n){
    static int * A;
    A = malloc(n * sizeof(int));
    for (int i = 0; i <= n; i++){
        A[i] = choose(5,i); 
    }
    printf("Your array elements are:\n ");
    printf("\n[ ");
    for (int i =0; i <= 5; i++) printf("%d ",A[i]);
    printf("]\n");
    return A; 
}

int main(){
    int* a;
    a = nthrowasarray(5);
    for (int i =0; i <= 5; i++) printf("%d ",*(a+i));
    printf("\n");
    return 0;
}


