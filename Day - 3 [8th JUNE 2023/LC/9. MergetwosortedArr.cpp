//PL : https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //already sorted-->good;
    //two pointer approach from the array last element;
    int i = m-1; //first pointer
    int j = n-1;
    int ctr  = nums1.size();

    while(i>=0&&j>=0)
    {
        if(nums2[j]>=nums1[i])
        {
            nums1[ctr-1] = nums2[j];
            j--; 
        }
        else 
        {
            nums1[ctr-1] = nums1[i];
            i--; 
        }
        ctr--;
    }

    while(j>=0)
    {
        nums1[ctr-1] = nums2[j];
        j--;
        ctr--;
    }
    

    }
};
