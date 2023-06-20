//PL : https://www.codingninjas.com/codestudio/problems/892994?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

int longestSubSeg(vector<int> &arr , int n, int k){
    int i =0;

    int j=0;
    int ans=0;

    int flip=0;

    while(i<n){

     

      if (arr[i] == 0) {

        flip++;

      }

      

      while (flip > k) {

        if (arr[j] == 0) {

          flip--;

        }

        

        j++;

      }

        ans=max(ans,i-j+1);

        i++;

 

    }

    return ans;
}
