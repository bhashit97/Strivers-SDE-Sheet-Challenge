//PL: https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
        if(firstHead==NULL||secondHead==NULL)
        return NULL;

        ListNode* first = firstHead;
        ListNode* second = secondHead;

        while(first!=NULL&&second!=NULL)
        {
            first = first->next;
            second = second->next;
        }
        if(first==NULL)
        first = secondHead;
        if(second==NULL)
        second = firstHead;

        while(first!=NULL&&second!=NULL)
        {
            first = first->next;
            second = second->next;
        }
        if(first==NULL)
        first = secondHead;
        if(second==NULL)
        second = firstHead;

        while(first!=second)
        {
            first = first->next;
            second = second->next;
            if(first==NULL||second==NULL)
            break;
        }

        return first;

    }
};
