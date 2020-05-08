struct ListNode* swapPairs(struct ListNode* head)
{
    struct ListNode *p1,*p2,*p3;
    if(!head || !head->next) return head;
    p1 = head;
    p2 = head->next;
    p3 = head->next->next;
    p2->next = p1;
    p1->next = swapPairs(p3);
    return p2;
}
