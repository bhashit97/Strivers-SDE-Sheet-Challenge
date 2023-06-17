//PL: https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseLL(ListNode* head, ListNode* prev)
    {
        if(head==NULL)
        return prev;

        ListNode* temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;

        return reverseLL(head,prev);  
    }
    ListNode* reverseList(ListNode* head) {
        //recursion
        head = reverseLL(head,NULL);
        return head;
    }
};
