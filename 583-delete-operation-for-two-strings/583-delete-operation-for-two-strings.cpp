class Solution {
public:
     int dp[501][501];
    int LCS(string s1,string s2,int n,int m)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1])
        {
            dp[n][m]= 1+LCS(s1,s2,n-1,m-1);
        }
        else
        {
            dp[n][m]= max(LCS(s1,s2,n-1,m),LCS(s1,s2,n,m-1));
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) 
    {
        memset(dp,-1,sizeof dp);
        int n=word1.length();
        int m=word2.length();
        int lcs=LCS(word1,word2,n,m);
        return (n-lcs)+(m-lcs);                    			  
    }
};
    
    