//PL: https://www.codingninjas.com/codestudio/problems/799897?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL)
    return NULL;
    LinkedListNode<int>* prev = NULL;
    while(head!=NULL)
    {
        LinkedListNode<int>* temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }

    return prev;
}
