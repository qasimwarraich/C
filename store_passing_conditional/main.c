#include <stdio.h>

const int EIGHT = 8;
const int NINE = 9;

int main()
{
    int x = EIGHT;
    if ((x = NINE)) {
        printf("%d\n", x); // Prints 9
    }
}
