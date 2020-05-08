#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

//This file contains the algorithm, for full implementation of the datastructure,
//see LinkedLists file. 

 // Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* mergeTwoLists(struct ListNode* h1, struct ListNode* h2){
    
// Declarations  
    struct ListNode * h3;
    struct ListNode * tail; 
    
//Base Cases
    if (h1 == NULL && h2 == NULL) return NULL;
    else if (h1 == NULL) return h2;
    else if (h2 == NULL) return h1; 
   
//Initialise Head.
    //H1 Smaller
    if (h1->val <= h2->val){
        h3 = h1;
        tail = h1;
        h1 = h1->next;      
    }
    //H2 Smaller
    else if (h2->val <= h1->val){
        h3 = h2; 
        tail = h2;
        h2 = h2->next;
    }
    
//Main logic loop, runs till either list is exhausted. 
    while (h1 != NULL && h2 != NULL){
        
        // H1 Smaller
        if (h1->val <= h2->val) { 
            tail -> next = h1;
            tail = h1;		
            h1 = h1 -> next;
        }
        // H2 Smaller
        else if (h2->val <= h1->val){
            tail->next = h2;
            tail = h2;
            h2 = h2->next;
        }
    }
        // While loop broken (a list is exhausted)
        if (h1 == NULL){
            tail->next =  h2;
            return h3;  
        }
        else if (h2 == NULL){
            tail->next  = h1;
            return h3;  
        }
    return h3;
}


int main(){
    
    
    return 0;
}

