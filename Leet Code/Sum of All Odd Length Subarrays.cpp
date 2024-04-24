class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        
      vector<int>prefixsum(n+1);

      for(int i=1;i<=n;i++)prefixsum[i]=prefixsum[i-1]+arr[i-1];

        int ans=0;
      for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int len=j-i+1;
            
            if(len%2!=0){
                ans=ans+(prefixsum[j]-prefixsum[i-1]);
            }
        }
      }
      return ans;
    }
};
