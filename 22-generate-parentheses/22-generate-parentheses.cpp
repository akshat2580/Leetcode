class Solution {
public:
   vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n+1); // cache to store all generated strings
        dp[0] = {""}; 
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                vector<string> left = dp[j];
                vector<string> right = dp[i-j-1];
                for(int k=0;k<left.size();k++){
                    for(int l=0;l<right.size();l++){
                        dp[i].push_back("(" + left[k] + ")" + right[l]);
                    }
                }
            }
        }
        return dp[n];
    }
};