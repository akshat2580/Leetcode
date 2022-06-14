class Solution {
public:
    int minDistance(string w1, string w2) {
        // if(w1)
        int n=w1.size(),m=w2.size();
        int dp[w1.size()+1][w2.size()+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)dp[i][j]=0;
                else if(w1[i-1]==w2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int c=dp[n][m];
        return w1.size()-c+w2.size()-c;
    }
};