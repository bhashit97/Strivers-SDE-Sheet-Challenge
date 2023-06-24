//PL : https://www.codingninjas.com/codestudio/problems/job-sequencing-problem_1169460?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
bool comparator(vector<int> v1, vector<int> v2)
{
   return v1[1]>v2[1];
}


int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),comparator);
    int maxi = jobs[0][0];
    int n = jobs.size();
    for(int i=1; i<n; i++)
    {
        maxi = max(maxi,jobs[i][0]);
    }

    int timeline[maxi+1];

    for(int i=0; i<=maxi; i++)
    timeline[i] = -1;
    int profit = 0, job_done = 0;

    for(int i=0; i<n; i++)
    {
        for(int j= jobs[i][0]; j>0; j--)
        {
            if(timeline[j]==-1)
            {
                timeline[j] = i;
                job_done++;
                profit += jobs[i][1];
                break;
            }
        }

    }

    return profit;
}
