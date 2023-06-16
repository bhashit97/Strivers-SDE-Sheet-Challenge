//PL: 
#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    int n = s.length();
    if(n<=1)
    return n;

    unordered_map<char,int> st;

    int longest = 1;
    int count = 0;
    int start = 0; 
    for(int i=0; i<n; i++)
    {
        if(i>0 && st.find(s[i])!=st.end())
        {
            while(st[s[i]]!=0)
            {
                st[s[start]]--;
                start++;
            }
            st[s[i]]++;
            
        }
        else
        {
            st[s[i]]++;
        }
        
        longest = max(i-start+1,longest);
    }

    return longest;
}
