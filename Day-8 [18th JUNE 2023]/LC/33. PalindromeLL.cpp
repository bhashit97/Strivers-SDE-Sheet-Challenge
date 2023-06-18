//PL : https://leetcode.com/problems/palindrome-linked-list/


class Solution {
public:
    ListNode *reverseList(ListNode* head)
        {
            ListNode * dum = NULL;
            while(head!=NULL)
            {
                ListNode *temp = head->next;
                head->next = dum;
                dum = head;
                head = temp;
            }
            
            return dum;
            
        }
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        fast = head;
        while(slow!=NULL)
        {
            if(fast->val!=slow->val)
            return false;
            fast = fast->next;
            slow = slow->next;
        }
        
        return true;
    }
};
