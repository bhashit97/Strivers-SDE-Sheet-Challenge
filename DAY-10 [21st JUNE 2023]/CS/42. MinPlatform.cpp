//PL : https://www.codingninjas.com/codestudio/problems/799400?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website



int calculateMinPatforms(int at[], int dt[], int n) {

    sort(at,at+n);
    sort(dt,dt+n);
    int count = 1;
    int res =1;
    int i =1, j= 0;
    while(i<n&&j<n)
    {
        if(at[i]<=dt[j])
        {
            count++;
            i++;
        }
        else if(at[i]>dt[j])
        {
            count--;
            j++;
        }

        if(res<count)
        {
            res=count;
        }

    }

    return res;
}
