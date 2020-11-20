#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

//Doesn't contain driver code for linked list. Just solution for problem. Driver
//code for linked list may be found in Linked Lists 2. 

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode* curr = head;  
    struct ListNode* next;
    struct ListNode* prev = NULL;  
    while (curr != NULL){
        next = curr -> next;
        curr -> next = prev; 
        prev = curr;
        curr = next; 
    }
    head = prev; 
    return head; 
} 


bool isPalindrome(struct ListNode* head)
{
    //  Simple cases:
    // Empty list or one element.
    if (head == NULL || head -> next == NULL) return true;
    
    //Fast pointer moves 2x as fast as slow, we are trying to find the halfway point. 
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    // Traverse looking for a half way point 
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    // Reset fast for comparison traversal and reverse the second half of the list. 
    slow = reverse(slow);
    fast = head; 
    
    // Comparison traversal: Use slow for stopping condition and compare vals. 
    while (slow != NULL){
        if (fast->val != slow->val) return false;
        slow = slow->next;
        fast = fast->next; 
    }
    
    return true;
}


int main(){
    
    
   return 0;
}

