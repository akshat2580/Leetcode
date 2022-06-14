class Solution {
public:

    int  solve(int& n,int k,int l,vector<vector<int>>&t,int dp[201][201]){
        if(k==n-1)return t[k][l];
        if(dp[k][l]!=-1)return dp[k][l];
         dp[k][l]=min(solve(n,k+1,l,t,dp),solve(n,k+1,l+1,t,dp))+t[k][l];
        return dp[k][l];
    }
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size(),k=0;
                int dp[201][201];
        for(auto& i:dp)for(auto& j:i)j=-1;
        int c=solve(n,k,0,t,dp);
        return c;
    }
};
