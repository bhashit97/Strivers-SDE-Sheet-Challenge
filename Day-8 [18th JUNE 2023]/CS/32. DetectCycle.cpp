//PL: https://www.codingninjas.com/codestudio/problems/628974?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

bool detectCycle(Node *head)
{
	if(head==NULL||head->next==NULL)
    return false;

    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL&&fast->next!=NULL)
    {
    
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
            return true;
    }

    return false;
}
