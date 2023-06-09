//PL : https://leetcode.com/problems/powx-n/submissions/967678809/


class Solution {
public:
    double Pow(double x, int n, long long int i)
    {
        //recursion
        if(i==0)
        return 1.0;

        double ans = Pow(x,n,i/2);
        if(i%2)
        {ans  = ans*ans*x;}
        else
        {ans = ans*ans;}

         return ans;
    }


    double myPow(double x, int n) {
        double res =  Pow(x, n, abs(n));
        if(n<0)
        return 1/res;
        return res;
    }
};
