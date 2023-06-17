//PL : https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //fast and slow approach
        //complexity = O(n);
        if(head==NULL)
        return NULL;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast->next!=NULL)
        {
            slow = slow->next;
            if(fast->next->next==NULL)
            break;
            fast = fast->next->next;
        }
        
        return slow;
    }
};
