//PL: https://www.codingninjas.com/codestudio/problems/1062658?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

struct maximumMeetings
{
    int start;
    int end;
    int pos;
};

bool comparator(struct maximumMeetings m1, struct maximumMeetings m2)
{
    if(m1.end<m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.pos<m2.pos) return true;

    return false;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {

    int n = start.size();
    //making the struct array
    struct maximumMeetings meet[n];

    for(int i=0; i<n; i++)
    {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i+1 ;
    }

    sort(meet,meet+n,comparator);

    vector<int> ans;
    int limit = meet[0].end;

    ans.push_back(meet[0].pos);

    for(int i = 1; i<n; i++)
    {
        if(meet[i].start>limit)
        {
            //perform the meet
            ans.push_back(meet[i].pos);
            limit = meet[i].end;
        }
    }

    return ans;

}
