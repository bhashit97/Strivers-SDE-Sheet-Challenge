//PL: https://leetcode.com/problems/reverse-pairs/

class Solution {
public:

    int merge(vector<int> &nums, int left, int mid, int right)
    {
        int cnt = 0;
        int j = mid+1;
        
        for(int i = left; i<=mid; i++)
        {
            while(j<=right&& nums[i]>nums[j]*2LL)
            {
                j++;
            }
            cnt += j - (mid+1); 
        }

        vector<int> temp;
        int i = left; j = mid+1;

        while(i<=mid&&j<=right)
        {
            if(nums[i]<nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=right)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for(int i=left; i<=right; i++)
        {
            nums[i] = temp[i-left];
        }
        return cnt;
    }

    int reverseC(vector<int> &nums, int left, int right)
    {
        if(left>=right)
        return 0;

        int mid = (left+right)/2;
        int cnt = reverseC(nums, left, mid);
        cnt += reverseC(nums, mid+1, right);

        cnt += merge(nums, left, mid, right);
        return cnt;

    }

    int reversePairs(vector<int>& nums) {
        int n =nums.size();
        int cnt = reverseC(nums,0,n-1);

        return cnt;
    }
};
