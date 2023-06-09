// InterviewBit problem link was update in leetcode icon
// PL : https://www.interviewbit.com/problems/repeat-and-missing-number-array/submissions/


vector<int> Solution::repeatedNumber(const vector<int> &arr) {
        int n = arr.size();
        int freq[n+1];
        for(int i=0; i<=n; i++)
        freq[i] = 0;
        for(int i = 0; i<n; i++)
        {
            freq[arr[i]]++;
        }
        int missing = -1;
        int repeating = -1;

        for(int i = 1; i<=n; i++)
        {
            if(freq[i]==0)
            missing = i;
            else if(freq[i]==2)
            repeating = i;

            if(missing!=-1&&repeating!=-1)
            break;
        }

        return {repeating,missing};
}
