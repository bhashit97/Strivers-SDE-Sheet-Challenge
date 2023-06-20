//PL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //map will be used
        map<int,int> mpp;
        for(auto it : nums)
        {
            mpp[it]++;
        }
        //counted the nums and frequency
        int i = 0;
        auto it = mpp.begin();
        while(it != mpp.end())
        {
            nums[i] = it->first;
            it++;
            i++;
        }
        
        return i;
    }
};
