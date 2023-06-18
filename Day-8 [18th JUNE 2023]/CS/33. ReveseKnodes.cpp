//PL : https://www.codingninjas.com/codestudio/problems/763406?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	if(head==NULL)
	return head;

	Node* dummy = new Node(0);
	dummy->next = head;
	
	int count = 0;
	Node*temp = dummy;
	while(temp->next)
	{
		count++;
		temp = temp->next;
	}
	
	Node *pre=dummy, *curr=dummy, *nex=dummy; 
	for(int i =0; i<n; i++)
	{
		bool flag = false;
		curr=pre->next;
		nex = curr->next;
		int itr = 0;
		if(b[i]==0)
		{
			//skip
			continue;
		}
		if(count<=b[i])
		{
			itr = count;
			flag = true;
		}
		else
		{
			itr = b[i];
		}
		for(int j=1; j<itr; j++)
		{
			curr->next = nex->next;
			nex->next = pre->next;
			pre->next = nex;
			nex =curr->next;  
		}

		pre = curr;
		count-=b[i];
		if(flag==true)
		{
			break;
		}
	}

	return dummy->next;
	
}
