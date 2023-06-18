//PL: https://www.codingninjas.com/codestudio/problems/799352?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

LinkedListNode<int> * reverseLL(LinkedListNode<int> * head)
{
    if(head==NULL)
    return head;

    LinkedListNode<int> *prev = NULL;
    while(head!=NULL)
    {
        LinkedListNode<int> *temp = head->next;
        head->next = prev;
        prev=head;
        head=temp;
    }
    return prev;
}
LinkedListNode<int> *middleLL(LinkedListNode<int> *head)
{
    if(head==NULL)
    return head;

    LinkedListNode<int> *fast = head;
    LinkedListNode<int> *slow = head;

    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;

}
bool isPalindrome(LinkedListNode<int>* head)
{
    if(head==NULL||head->next==NULL)
    return true;

    LinkedListNode<int> *mid = middleLL(head);
    mid->next = reverseLL(mid->next);
    mid = mid->next;
    LinkedListNode<int> *dummy = head;

    while(mid!=NULL)
    {
        if(mid->data!=dummy->data)
        return false;
        mid = mid->next;
        dummy = dummy->next;
    }

    return true;


}
