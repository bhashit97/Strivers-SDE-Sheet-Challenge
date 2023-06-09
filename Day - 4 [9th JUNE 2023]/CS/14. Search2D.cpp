//PL : https://www.codingninjas.com/codestudio/problems/980531?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        //first search the row for target
        int target_row = -1;
        for(int i = 0; i<n; i++)
        {
            if(mat[i][0]<=target && mat[i][mat[i].size()-1]>=target)
            {
                target_row = i;
                break;
            }
        }
        if(target_row==-1)
        return false;

        //apply binary search in target row
        int st = 0;
        int end = mat[target_row].size()-1;
        if(target==mat[target_row][st]||target==mat[target_row][end])
        return true;

        st++; end--;

        while(st<=end)
        {
            int mid = st + (end-st)/2;
            if(mat[target_row][mid]==target)
            {
                return true;
            }
            else if(mat[target_row][mid]<=target)
            {
                st = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }

        return false;
}
