#include <stdio.h>

void swaparr(int a[],int i, int j){

    int t;
    t = a[i];
    a[i] = a[j];
    a[j] = t;
}
int arrlen(int array[]){
    int length = sizeof(* array) / sizeof(array[0]);
    printf("\n %d Calculated Length\n", length);

    return length;
}
int main(){
    int spam[] = {0,1,2,3,4,5};
   
    int len = sizeof(spam) / sizeof(spam[0]);
    printf("%d size of spam\n", len); 
    int clen = arrlen(spam);
    printf("%d calculated  size of spam\n", clen); 
    
    for(int index =0; index<6; index++){printf("%d\n",spam[index]);}
    
    swaparr(spam, 0, 3);
    printf("swap performed\n");
    
    for(int index =0; index<6; index++){printf("%d\n",spam[index]);}
    
    return 0;
}
