class Solution {
public:

    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size(),k=0;
                int dp[201][201];
        for(auto& i:dp)for(auto& j:i)j=-1;
        for(int i = 0; i < n; i++) 
			dp[n-1][i] = t[n-1][i];
		for(int i = n-2; i >= 0; i--) {
			for(int j = i; j >= 0; j--) {
				dp[i][j] = min(dp[i+1][j],dp[i+1][j+1])+t[i][j];
			}
		}
		return dp[0][0];
	}
};
