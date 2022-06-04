class Solution {
public:
    vector<int> dp;
    
    int solve(vector<int>& s,int n){
        if(n==-1)return 0;
        if(n==0)return s[0];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(s[n]+solve(s,n-2),solve(s,n-1));
    }
    
    int rob(vector<int>& s) {
        dp=vector<int>(s.size(),-1);
        return solve(s,s.size()-1);
    }
    
};