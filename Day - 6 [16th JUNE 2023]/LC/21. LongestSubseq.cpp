//PL : https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
      int n = arr.size();
      if(n==0||n==1)
      return n;
      //using set ds here
      unordered_set<int> s;
      for(auto it:arr)
      {
        s.insert(it);
      }
      int longest = 1;

      for(auto it:s)
      {
        if(s.find(it-1)==s.end())
        { 
          //this is the smallest according to current iterator of set
          int count = 1;
          int ele = it;
          ele++;
          while(s.find(ele)!=s.end())
          {
              count++;
              ele++;
          }
          longest = max(count, longest);
        }
      }

      return longest;
    }
};
