//PL : https://www.codingninjas.com/codestudio/problems/920454?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node *rotate(Node *head, int k) {
     
     if(k==0||head==NULL||head->next==NULL)
     return head;
     
     //count the LL
     Node* first = head;
     int count = 0;
     while(first)
     {
          count++;
          first = first->next;
     }

     k = k%count;
     if(k==0)
     return head;
      
     first = head;
     Node* second = head;
     for(int i=1; i<=k; i++)
     {
          first= first->next;
     }
     while(first->next!=NULL)
     {
          second = second->next;
          first = first->next;
     }
     Node*temp = second->next;
     second->next = NULL;
     first->next = head;
     head = temp;

     return head;
     
}
