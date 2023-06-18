//PL: https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node* merge(Node* a, Node* b)
{
    Node* temp = new Node(0);
    Node* res = temp;
    
    while(a!=NULL&&b!=NULL)
    {
        if(a->data<b->data)
        {
            temp->bottom = a;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            b = b->bottom;
        }
        temp = temp->bottom;
    }
    if(a!=NULL) temp->bottom = a;
    else temp->bottom =b;
    
    res = res->bottom;
    return res;
}

Node *flatten(Node *root)
{
    //recursion
    if(root==NULL||root->next==NULL)
    return root;

    root->next = flatten(root->next);
    
    return merge(root,root->next);
    
}

