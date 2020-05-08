#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


double myPow(double x, __int128 n){
    if (n == 0 ) return 1;
    if (n < 0){
        return 1 / myPow(x,-n);
    }
    else{
        double halfpower = myPow(x, n/2);
        if (n % 2 == 0 ){
            return  halfpower * halfpower;
        }
        else {
            return x * halfpower * halfpower;
        }

    }
}
//Special cases 
//Negation of large negatives like -2147483648 cannot be represented in type 'int'; cast to an unsigned //type to negate this value to itself.


int main(){
    
    
    return 0;
}

