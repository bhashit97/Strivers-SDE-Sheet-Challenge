//PL : https://www.codingninjas.com/codestudio/problems/759408?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    //implemenyting with set ds
    unordered_set<int> s;
    //push into the set
    for(auto it:arr)
    s.insert(it);

    int longest = 1;
    for(auto it:s)
    {
        
        if(s.find(it-1)==s.end())
        {
            int count = 1;
            int ele = it;
            ele++;
            while(s.find(ele)!=s.end())
            {
                count++;
                ele++;
            }
            longest = max(count,longest);
        }
        
    }

    return longest;
}
