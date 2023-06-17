//PL : https://www.codingninjas.com/codestudio/problems/799912?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node* removeKthNode(Node* head, int K)
{
    Node* dummy = new Node();
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;

    for(int i=1; i<=K; i++)
    {
        fast = fast->next;
    }
    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next= slow->next->next;

    return dummy->next;
}
