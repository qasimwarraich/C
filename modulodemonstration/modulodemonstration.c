#include <stdio.h>

/* The modulo function in C is actually a remainder function!
 * For example:
 *   5 %  2 =  1 :because 2*2 = 4 and the remainder is 1.
 *  -5 %  2 = -1 :because 2*-2 = -4 and the remainder is -1.
 *  -5 % -2 = -1 :because -2*2 = -4 and the remainder is -1.
 *   5 % -2 =  1 :because -2*-2 = 4 and the remainder is 1.  
 */

int main()
{
    printf("%d\n", 5 % 2);
    printf("%d\n", -5 % 2);
    printf("%d\n", -5 % -2);
    printf("%d\n", 5 % -2);
    
    return 0;
}

