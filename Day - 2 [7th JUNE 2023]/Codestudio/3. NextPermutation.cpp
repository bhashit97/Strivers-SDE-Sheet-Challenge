//PL : https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index = -1;
    //start from last
    for(int i=n-2; i>=0; i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    for(int i = n-1; i>index; i--)
    {
        if(permutation[i]>permutation[index])
        {
            swap(permutation[i],permutation[index]);
            break;
        }
    }
    // now reverse from index+1;
    reverse(permutation.begin()+index+1,permutation.end());

    return permutation;
}
