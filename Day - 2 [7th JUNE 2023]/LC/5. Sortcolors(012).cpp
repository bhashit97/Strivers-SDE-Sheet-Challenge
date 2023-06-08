//PL : https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
         // Dutch National Flag Algorithm
        int low = 0, mid =0, high = n-1;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                //swap the low and mid for sorting 0's and 1's
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++; //already sorted
            }
            else
            {
                //2 is present, so swap with high
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        return;
    }
};
