#include <stdio.h>

const int EIGHT = 8;
const int NINE = 9;

int main()
{
    int x = EIGHT;
    if (1) {
        printf("%d\n", x); // Prints 8
    }

    if ((x = NINE)) { // x is updated in the test condition!
        printf("%d\n", x); // Prints 9
    }
}
