#include <stdio.h> 

/*
 * In this example implementation we use pointer airemetic to manipulate the
 * string s through the function reversestring. The function uses a temp
 * variable to swap elements on opposite sides of the string. The while loop
 * terminates when the the iterators i and j cross each other. 
 */

void reversestring(char* s, int size)
{
    int i = 0;
    int j = size-1;
    char temp;
    while (i<j){
        temp = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    char s[4] = "spam";
    int size = 4;
    reversestring(s,size);
    for (int i = 0; i < size; i++)  printf("%c",s[i]);
    printf("\n");
    return 0;
}
