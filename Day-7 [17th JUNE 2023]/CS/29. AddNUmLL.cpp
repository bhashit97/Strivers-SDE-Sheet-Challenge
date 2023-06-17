//PL: https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_1170520?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* dummy = new Node();
    Node* head = dummy;
    int carry = 0;
    while(num1!=NULL&&num2!=NULL)
    {
        int digit = num1->data + num2->data + carry;
        if(digit>9)
        {
            carry = 1;
            digit = digit%10;
        }else
        {
            carry = 0;
        }
         Node* temp = new Node(digit);
         head->next = temp;
         head = temp;
         num1 = num1->next;
         num2 = num2->next;
    }
    while(num1!=NULL)
    {
        int digit = num1->data + carry;
        if(digit>9)
        {
            carry = 1;
            digit = digit%10;
        }else
        {
            carry = 0;
        }
         Node* temp = new Node(digit);
         head->next = temp;
         head = temp;
         num1 = num1->next;
    }
    while(num2!=NULL)
    {
        int digit = num2->data + carry;
        if(digit>9)
        {
            carry = 1;
            digit = digit%10;
        }else
        {
            carry = 0;
        }
         Node* temp = new Node(digit);
         head->next = temp;
         head = temp;
         num2 = num2->next;
    }
    if(carry==1)
    {
         Node* temp = new Node(carry);
         head->next = temp;
         head = temp;
         carry = 0;
    }

    return dummy->next;
}
