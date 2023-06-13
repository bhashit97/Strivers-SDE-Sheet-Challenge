//PL: https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        //sort
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue; //avoid duplicate
            for(int j = i+1; j<n;j++)
            {    
                if(j!=i+1&&nums[j]==nums[j-1]) continue; //avoid duplicate
                
                int k = j+1, l = n-1;
                while(k<l)
                {
                    long long sum = nums[i];
                    sum +=nums[j];
                    sum +=nums[k];
                    sum += nums[l];
                    if(sum==target)
                    {
                        //this the quadraple
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        
                        while(k<l&&nums[k]==nums[k+1]) k++; //avoid duplicate
                        while(k<l&&nums[l]==nums[l-1]) l--; //avoid duplicate
                        k++; l--;
                        
                    }
                    else if(sum<target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};
