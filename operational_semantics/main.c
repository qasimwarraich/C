#include <stdio.h>

void f(int a, int b)
{
    /* clang outputs 5, 6
     * gcc outputs 4, 5
     */
    printf("a %d  b %d \n", a, b);
}

int main()
{
    int n = 5;
    f(n++, n--);
    return 0;
}
