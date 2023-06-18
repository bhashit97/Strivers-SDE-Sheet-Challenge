//PL : https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* second = head;
        if(head==NULL)
        return false;
        while(fast->next!=NULL)
        {
            second = second->next;
            if(fast->next->next==NULL)
            break;
            fast = fast->next->next;
            if(fast==second)
            return true;
        }
        
        return false;
    }
};
