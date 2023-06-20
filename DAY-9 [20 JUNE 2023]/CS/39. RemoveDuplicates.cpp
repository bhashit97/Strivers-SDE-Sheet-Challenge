//PL : https://www.codingninjas.com/codestudio/problems/1102307?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;

	for(int j=i+1; j<n; j++)
	{
		if(arr[i]!=arr[j])
		{
			arr[i+1]=arr[j];
			i++;
		}
	}

	return i+1;
}
