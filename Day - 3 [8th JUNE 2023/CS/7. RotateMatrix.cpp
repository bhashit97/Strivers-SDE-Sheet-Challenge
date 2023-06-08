//PL : https://www.codingninjas.com/codestudio/problems/981260?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row = 0, col = 0;
    while(row<=(n/2)-1 && col<=(m/2)-1)
    {
        //start from mat[row][col]
        int i = row, j = col;
        int temp = mat[i][j];  // to posses the last element
        while(j<(m-1)-col)
        {
            int prev = mat[i][j+1];
            mat[i][j+1] = temp;
            temp = prev;
            j++;
        }

        while(i<(n-1)-row)
        {
            int prev = mat[i+1][j];
            mat[i+1][j] = temp;
            temp = prev;
            i++;
        }

        while(j>col)
        {
            int prev = mat[i][j-1];
            mat[i][j-1] = temp;
            temp = prev;
            j--; 
        }

        while(i>row)
        {
            int prev = mat[i-1][j];
            mat[i-1][j] = temp;
            temp = prev;
            i--; 
        }

        row++; col++;
    }

    return;

}
