//PL: https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    
    unordered_map<int, int> mpp;
    int longest = 0;
    int xorsum = 0;
    mpp[0] = 1;
    for(int i=0; i<A.size(); i++)
    {
        xorsum ^= A[i];
        int xr = B^xorsum;
        longest += mpp[xr];
        mpp[xorsum]++;
    }
    
    return longest;
}
