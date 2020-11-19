#include <stdio.h> 


void reverse_string(char* s, int size)
{
    /* Base case: Size of Array atleast 2 elements. */
    if(size > 1){ 
        /* Standard swapping procedure using temp variable. */
        char temp = s[0];
        s[0] = s[size-1];
        s[size-1] = temp;

        /* Reduce size by 2 places, one for head one of tail. 
        Move one memory space over in s to create new effective head. */
        reverse_string(s+1, size-2); 
    } 
}

int main()
{
    char s[10] = "SomeString";
    int size = 10;
    reverse_string(s,size);
    for (int i = 0; i < size; i++) printf("%c",s[i]); printf("\n");

    return 0;
}
