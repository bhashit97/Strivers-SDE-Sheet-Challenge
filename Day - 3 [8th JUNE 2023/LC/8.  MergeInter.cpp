//PL: https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        //first sort 
        sort(intervals.begin(),intervals.end());
        for(int i=0; i<n; i++)
        {
            if(ans.empty()||intervals[i][0]>ans.back()[1])
            {
                //these are the only cases for which we will make new intervals
                ans.push_back(intervals[i]); 
            }
            else
            {
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};
