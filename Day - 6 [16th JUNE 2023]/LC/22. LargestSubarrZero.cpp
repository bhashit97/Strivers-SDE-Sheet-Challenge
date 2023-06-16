//PL : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int longest = 0;
    
        unordered_map<int,int> mpp;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum+=A[i];
            if(sum==0)
            longest = i+1;
            else
            {
                int rem = sum;
                if(mpp.find(rem)!=mpp.end())
                {
                    longest = max(longest, i-mpp[rem]);
                }
            }
            if(mpp.find(sum)==mpp.end())
            {
                mpp[sum] = i;
            }
            
        }
        
        return longest;
        
    }
};
