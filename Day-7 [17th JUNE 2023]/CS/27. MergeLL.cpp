//PL : https://www.codingninjas.com/codestudio/problems/800332?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL)
    return second;
    if(second==NULL)
    return first;

    Node<int>* head = NULL;
    Node<int>* prev = NULL;
    

    Node<int>* n = new Node<int>(0);
    if(first->data<second->data)
    {
        n->data = first->data;
        first = first->next;
    }
    else
    {
        n->data = second->data;
        second = second->next;
    }
    head = n;
    prev = n;

    while(first!=NULL&&second!=NULL)
    {
        Node<int>* n = new Node<int>(0);
        if(first->data<second->data)
        {
            n->data = first->data;
            first = first->next;
        }
        else
        {
            n->data = second->data;
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
