#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


struct node{
    int val;
    struct node *next;
};

struct list{
    struct node *head;
};

//Initilise list with head
   

void printlist(struct list *list){
    struct node *curr = list->head;
    while (curr != NULL){
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("\n");
}

void insertat(struct list *l,int pos, int val){
    struct node *new = malloc(sizeof(struct node));
    new->val = val;
    new->next = NULL; 
    //Empty list 
    if (l->head == NULL){
        l->head = new;
        return;
    }
    //Position finding index
    int index =0;
    //Curr will walk the list and prev is a helper for cases 2 and 3
    struct node *prev =NULL;
    struct node *curr =l->head;
    //Loop walks the list with curr at current index node and prev one behind. 
    while (curr != NULL && index != pos){
        index++;
        prev = curr;
        curr = curr -> next;
    }
    //Case 1: head of List
    if (index == 0){
        l -> head = new;
        new->next = curr;
        return;
    }
    //Case 2: tail of List
    if (curr == NULL){
        prev->next = new;
        return;
    }
    //Case 3: middle of list
    prev->next = new;
    new->next = curr;
}

void add_beg(struct list *list,int val){
    insertat(list, 0 , val);
}

void add_end(struct list *list, int val){
    insertat(list, -1, val);
}

void delete_val(struct list *list,int val){
    struct node *prev = NULL;
    struct node *curr = list -> head;

    while(curr != NULL && curr->val != val){
        prev = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        return;
    }

    if(prev == NULL){
        if (curr->next == NULL){
               list ->  head = NULL;
        }
        else{
           list ->  head = curr->next;
        }
        free(curr);
        return;
    }
    if(curr->next == NULL){
        prev->next = NULL;
        free(curr);
        return;
    }
    if(prev->next != NULL && curr->next != NULL){
    prev->next = curr->next;
    free(curr);
    return;
    }
}

int main(){
    struct list *list1 = malloc(sizeof(struct list));
    list1->head=NULL;
 
    
    add_beg(list1, 5);
    insertat(list1,0,69);
    insertat(list1,3,420);
    delete_val(list1,6);
    printlist(list1);

   

    return 0;
}
