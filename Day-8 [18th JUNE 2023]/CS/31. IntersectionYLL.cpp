//PL : https://www.codingninjas.com/codestudio/problems/630457?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL||secondHead==NULL)
    return NULL;

    Node* first = firstHead;
    Node* second = secondHead;

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
