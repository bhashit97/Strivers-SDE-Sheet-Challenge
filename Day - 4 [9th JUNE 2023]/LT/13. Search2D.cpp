// PL : https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // search in like virtual array
        if(!matrix.size())
        return false;
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = (n*m)-1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(matrix[mid/m][mid%m]==target)
            return true;
            else if(matrix[mid/m][mid%m]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return false;
        
    }
};
Console

