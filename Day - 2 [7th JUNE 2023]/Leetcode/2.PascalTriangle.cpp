//Problem Link :- https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int n = numRows;
        vector<vector<int>> final;
        
        final.push_back({1});
        if(n==1)
        return final;

        for(int i = 2; i<=n; i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j = 0; j<final[i-2].size()-1; j++)
            temp.push_back(final[i-2][j]+final[i-2][j+1]);

            temp.push_back(1);
            final.push_back(temp);
        }
        
        return final;
    }
};
