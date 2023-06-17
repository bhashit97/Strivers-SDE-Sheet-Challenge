//PL : https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //no need for length
        int sum = 0, carry=0;
        
        ListNode *temp = new ListNode();
        ListNode *dum = temp;
        while(l1!=NULL||l2!=NULL||carry)
        {
            sum = 0;
            if(l1!=NULL)
            {
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum+= l2->val;
                l2 = l2->next;
            }
            if(carry)
            {
                sum+= carry;
            }
            carry = sum/10;
            ListNode* n = new ListNode(sum%10);
            temp->next = n;
            temp = temp->next;

        }

        return dum->next;

    }
};
