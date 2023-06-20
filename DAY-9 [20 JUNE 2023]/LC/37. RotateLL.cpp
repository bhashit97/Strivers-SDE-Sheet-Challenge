// PL: https://leetcode.com/problems/rotate-list/description/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //some base case
       

        if(head==NULL)
        return head;

        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        k = k%count;
        if(k==0)
        return head;
        
        //O(n) sol
        ListNode* tail = head;
        ListNode* prev = NULL;
        int i = 1;
        while(i<(count-k+1))
        {
            prev = tail;
            tail = tail->next;
            i++;
        }
        ListNode* tail2 = tail;

        while(tail2->next!=NULL)
        {
            tail2 = tail2->next;
        }

        prev->next = NULL;
        tail2->next = head;
        head = tail;
        
       return head;
    }
};
