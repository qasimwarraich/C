#include <stdio.h>
#include <stddef.h>

  //Definition for singly-linked list.
struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* swapPairs(struct ListNode* head){
    if (head == NULL || head -> next == NULL) return head;
    
    struct ListNode* temp;
    temp = head ->next -> next;
    head-> next -> next = head;
    head = head-> next ;
    printf("%d \n", head->val);
    if (temp == NULL){
        head -> next -> next = NULL;
    }
    else{
        head -> next -> next = swapPairs(temp);
    }
    return head; 

}
