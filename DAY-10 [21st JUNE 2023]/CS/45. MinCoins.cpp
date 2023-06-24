//PL : https://www.codingninjas.com/codestudio/problems/975277?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 

int coinsRequired(int amount, int note)
{
    int coins = 0;
    long long int sum = 0;
    while(sum<=amount)
    {
        sum = sum + note;
        if(sum>amount)
        break;
        coins++;
    }

    return coins;
}
int findMinimumCoins(int amount) 
{
    vector<int> deno = {1000,500,100,50,20,10,5,2,1};
    int coins = 0;
    int st = 0; //for travesing in deno
    while(amount>0)
    {
        while(amount<deno[st])
        {
            st++;
        }
        int curr_coins = coinsRequired(amount,deno[st]);

        amount = amount - curr_coins*deno[st];
        coins += curr_coins;
    }

    return coins;

}
