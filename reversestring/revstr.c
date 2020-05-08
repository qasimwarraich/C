#include <stdio.h> 


void reverseString(char* s, int sSize){
    int i = 0;
    int j = sSize-1;
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

int main(){
    char s[4] = "skuu";
    int size = 4;
    reverseString(s,size);
    for (int i = 0; i < size; i++)  printf("%c",s[i]);
    printf("\n");
    return 0;
}
