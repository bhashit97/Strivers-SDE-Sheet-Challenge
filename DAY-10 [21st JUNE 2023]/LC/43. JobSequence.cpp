//PL : https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool comparator(Job j1, Job j2)
    {
        return j1.profit>j2.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comparator);
        int max_profit = 0, job_done = 0;
        
        int maxi = arr[0].dead;
        
        for(int i = 1; i<n; i++)
        {
            maxi = max(maxi, arr[i].dead);
        }
        
        int timeline[maxi+1];
        
        for(int i=0; i<=maxi; i++)
        timeline[i] = -1;
        
        for(int i=0; i<n; i++)
        {
            for(int j = arr[i].dead ; j>0; j--)
            {
                if(timeline[j]==-1)
                {
                    job_done++;
                    timeline[j] = arr[i].dead;
                    max_profit += arr[i].profit;
                    break;
                }
            }
        }
        
        return {job_done,max_profit};
    } 
};
