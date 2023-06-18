//PL : https://www.codingninjas.com/codestudio/problems/1112655?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
Node* mergeLL(Node* first, Node* second)
{
	Node* temp = new Node(0);
	Node* res=temp;

	while(first!=NULL&&second!=NULL)
	{
		if(first->data<second->data)
		{
			temp->child = first;
			temp = temp->child;
			first = first->child;
		}
		else
		{
			temp->child = second;
			temp = temp->child;
			second = second->child;
		}
	}

	if(first)
	{
		temp->child = first;
	}
	else
	{
		temp->child = second;
	}

	return res->child;
}



Node* flattenLinkedList(Node* head) 
{
	if(head==NULL||head->next==NULL)
	return head;

	Node* L2 = flattenLinkedList(head->next);

    head->next = NULL;

    Node* nhead = mergeLL(head, L2);

    return nhead;
}
