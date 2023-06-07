//PL : https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        long long int max_sum = INT_MIN;
        long long int sum = 0;
        int n =arr.size();

        //Kadane's ALgo
        
        for(int i =0; i<n; i++)
        {
        
            sum += arr[i];
            max_sum = max(sum, max_sum);
            if(sum<0)
            sum = 0;
        }

        return max_sum;
    }
};
