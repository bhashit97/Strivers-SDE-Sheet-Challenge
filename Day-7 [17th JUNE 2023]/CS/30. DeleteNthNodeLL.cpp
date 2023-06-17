//PL:https://www.codingninjas.com/codestudio/problems/1105578?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

void deleteNode(LinkedListNode<int> * node) {

    LinkedListNode<int> *temp = node;

    temp->data = temp->next->data;

    temp->next = temp->next->next;
}
