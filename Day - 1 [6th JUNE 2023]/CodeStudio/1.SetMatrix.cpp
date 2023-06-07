//Problem Link : https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	//Here we are trying to reduce the space complexity to O(1)
	int row = matrix.size();
	int col = matrix[0].size();

	int col0 = 1; //to keep the previous record 
	for(int i = 0; i<row; i++)
	{
		for(int j = 0; j<col; j++)
		{
			if(matrix[i][j]==0)
			{
				//mark the row and col
				matrix[i][0] = 0;
				if(j!=0)
				matrix[0][j] = 0;
				else
				col0 = 0;
			}

		}
	}

	for(int i = 1; i<row; i++)
	{
		for(int j = 1; j<col; j++)
		{
			if(matrix[i][0]==0||matrix[0][j]==0)
			{
				matrix[i][j] = 0;
			}
		}
	}

	if(matrix[0][0]==0)
	{
		for(int j=0; j<col; j++)
		matrix[0][j] = 0;
	}
	if(col0==0)
	{
		for(int i=0; i<row; i++)
		matrix[i][0] = 0;
	}
	return;
}
