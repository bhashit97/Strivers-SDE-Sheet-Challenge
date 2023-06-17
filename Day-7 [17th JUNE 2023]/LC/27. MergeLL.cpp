//PL : https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        if(first==NULL)
        return second;
        if(second==NULL)
        return first;

        ListNode* head = NULL;
        ListNode* prev = NULL;
        

        ListNode* n = new ListNode();
        if(first->val<second->val)
        {
            n->val = first->val;
            first = first->next;
        }
        else
        {
            n->val = second->val;
            second = second->next;
        }
        head = n;
        prev = n;

        while(first!=NULL&&second!=NULL)
        {
            ListNode* n = new ListNode();
            if(first->val<second->val)
            {
                n->val = first->val;
                first = first->next;
            }
            else
            {
                n->val = second->val;
                second = second->next;
            }
            prev->next = n;
            prev = n;
        }
        if(first!=NULL)
        {
            prev->next = first;
        }
        if(second!=NULL)
        {
            prev->next = second;
        }

        return head;
    }
};
