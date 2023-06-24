//PL : https://www.codingninjas.com/codestudio/problems/1062712?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include<bits/stdc++.h>
struct activities
{
    int start;
    int end;
};

bool comparator(activities a1, activities a2)
{
    if(a1.end<a2.end)
    return true;
    else if(a1.end>a2.end)
    return false;
    else if(a1.start<a2.start)
    return true;

    return false;
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n = start.size();
    // make own ds;
    activities timings[n];
    for(int i=0; i<n; i++)
    {   
        timings[i].start = start[i];
        timings[i].end = finish[i];
    }

    sort(timings,timings+n,comparator);

    int count = 1;
    activities curr = timings[0];

    for(int i=1; i<n; i++)
    {
        if(timings[i].start>=curr.end)
        {
            count++;
            curr = timings[i];    
        }
        
    }

    return count;
}
