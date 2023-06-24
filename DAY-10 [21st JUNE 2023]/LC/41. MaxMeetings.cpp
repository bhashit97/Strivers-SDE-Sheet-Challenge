//PL : https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution
{
    public:
    struct maximumMeetings
    {
        int start;
        int end;
        int pos;
    };
    
    static bool comparator(struct maximumMeetings m1, struct maximumMeetings m2)
    {
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos<m2.pos) return true;
    
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
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
        
        int count = 1;
    
        for(int i = 1; i<n; i++)
        {
            if(meet[i].start>limit)
            {
                //perform the meet
                count++;
                ans.push_back(meet[i].pos);
                limit = meet[i].end;
            }
        }
    
        return count;
    }
};
