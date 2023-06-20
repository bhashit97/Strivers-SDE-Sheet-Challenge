//PL : https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //same approach as two sum approach;
        //no duplicates
        for(int i = 0; i<n-2; i++)
        {
            if(i==0||(i>0&&nums[i]!=nums[i-1]))
            {
                int a = nums[i];
                int target  = 0 - a;
                int low = i+1, high = n-1;
                while(low<high)
                {
                    int sum = nums[low] + nums[high];
                    vector<int> temp;
                    if(sum==target)
                    {
                        temp.push_back(a);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        v.push_back(temp);
                        while (low < high && nums[low] == nums[low+1]) low++;
                        while (low < high && nums[high] == nums[high-1]) high--;

                        low++;
                        high--;

                    }
                    else if(sum<target) low++;
                    else high--;
                }
            }
            
        }

        return v;
        
    }
};
