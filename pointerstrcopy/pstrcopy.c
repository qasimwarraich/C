#include <stdio.h>



void pstrcopy(char* ptr,int len){
    char target[len];
    for(int j=0; j<= len; j++){
        *(target +j) = *(ptr +j);
    }
    printf("\n\n");
    printf("Target Array\n");
    for(int i =0; i<=len; i++){printf("%c",target[i]);}
    printf("\n\n");
}


int main(){

    char s[] = "spam vitali";
    int len;
    printf("Source Array\n");
    for(int i =0; s[i]!= '\0'; i++){printf("%c",s[i]);len++;}
    printf(" length =%d\n",(len));
    pstrcopy(s,len);
    return 0;
}
