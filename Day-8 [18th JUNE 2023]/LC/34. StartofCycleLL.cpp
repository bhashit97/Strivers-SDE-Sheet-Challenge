//PL : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:

    ListNode* cycleMeet(ListNode* head)
    {
        if(head==NULL)
        return head;

        ListNode *fast = head;
        ListNode *slow = head;

        while(fast->next!=NULL)
        {
            if(fast->next->next)
            fast = fast->next->next;
            else
            return NULL;
            
            slow= slow->next;

            if(fast==slow)
            {
                //cycle present
                return fast;
            }
        }

        return NULL;
    } 
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = cycleMeet(head);
        if(slow==NULL)
        return slow;

        ListNode* start = head;
        while(start!=slow)
        {
            start = start->next;
            slow = slow->next;
        }

        return start;
    }
};
