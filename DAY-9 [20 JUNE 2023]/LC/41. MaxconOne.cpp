//PL: https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        int fx = 0, st= 0, curr = 0, maxS = 0;
        while(st<n)
        {
            if(nums[st]==1)
            {
                curr = st-fx+1;
                if(curr>maxS)
                maxS=curr;
            }
            else
            {
                fx = st;
                fx++;
            }
            st++;
        }

        return maxS;
    }
};
