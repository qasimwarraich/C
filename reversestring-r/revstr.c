#include <stdio.h> 


void reverseString(char* s, int sSize){
    //Base case: Size of Array atleast 2 elements.
    if(sSize > 1){ 
        // Standard swapping procedure using temp.
        char t = s[0];
        s[0] = s[sSize-1];
        s[sSize-1] = t;
        //Reduce size by 2 places, one for head one of tail.
        //Move one memory space over in s to create new effective head.
        reverseString(s+1,sSize-2); 
    } 
}

int main(){
    char s[4] = "skuu";
    int size = 4;
    reverseString(s,size);
    for (int i = 0; i < size; i++)  printf("%c",s[i]);
    printf("\n");
    return 0;
}
