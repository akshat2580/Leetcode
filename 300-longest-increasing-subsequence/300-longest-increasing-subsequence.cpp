class Solution {
public:
     int dp[2501];
    int lengthOfLIS(vector<int>& s) {
        int n=s.size(),ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            ans=max(ans,lis(i,s));
        }
        return ans;
    }
    int lis(int i,vector<int>&a){
        int ans=1;
        if(dp[i]!=-1)return dp[i];
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                ans=max(ans,lis(j,a)+1);
            }
        }
        return dp[i]=ans;
    }
};