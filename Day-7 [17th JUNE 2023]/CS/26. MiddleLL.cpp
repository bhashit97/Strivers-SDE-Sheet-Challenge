//PL: https://www.codingninjas.com/codestudio/problems/973250?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node *findMiddle(Node *head) {
    if(head==NULL||head->next==NULL)
        return head;
    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL)
    {
        if(fast->next)
        fast = fast->next->next;
        else
        {
            break;
        }

        slow = slow->next;
        
    }

    return slow;
}
