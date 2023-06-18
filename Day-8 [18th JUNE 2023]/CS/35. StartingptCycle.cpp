//PL : https://www.codingninjas.com/codestudio/problems/1112628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node *firstNode(Node *head)
{
    if(head==NULL&&head->next==NULL)
    {
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast->next&&fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast)
        {
            fast=head;
            while(slow!=fast)
            {
                fast=fast->next;
                slow=slow->next;
            }
            return fast;
        }
    }

    return NULL;

}
