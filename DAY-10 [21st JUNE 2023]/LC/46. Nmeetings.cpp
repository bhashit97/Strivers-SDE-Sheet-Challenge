class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    static bool comparator(Item p1, Item p2)
    {
        return p1.value*1.0/p1.weight > p2.value*1.0/p2.weight;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       sort(arr,arr+n,comparator);
       int curr = 0;
       double value = 0.0;
       int i = 0;
       while(i<n)
       {
           if(curr+arr[i].weight<=W)
           {
               value += arr[i].value;
           }
           else
           {
               int remain = W-curr;
               value += ((arr[i].value*1.0)/arr[i].weight)*double(remain);
               break;
           }
           
           curr += arr[i].weight;
           i++;
       }
        
        
        return value;
    }
        
};
