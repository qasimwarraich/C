#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Simple factorial function with tail recursion. The tail()
 * function multiplies the current n by a stored value and 
 * calls itself until n = 1 at which point it just returns the 
 * stored value. This saves on memory space because we don't 
 * have to remember the values of previous recursive calls and
 * do the multiplication at the end. Instead we perform the 
 * multiplication and then make the recursive call. 
 */ 

int tail(int n, int storedres){
    if (n == 0){return storedres;}
    return tail(n-1, n * storedres);
}
 
int factorial(int n){
    int result = 1;
    return tail(n, result);
}


int main(){
    printf("%d\n", factorial(16));
    
    return 0;
}

