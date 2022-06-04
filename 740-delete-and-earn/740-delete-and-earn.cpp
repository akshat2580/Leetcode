class Solution {
public:
    int deleteAndEarn(vector<int>& n) {int l=n.size();
        int a[n.size()];vector <int>dp(10001);
       map<int,int> m;
        for(int i=0;i<l;i++)
        {
            m[n[i]]++;
        }
        dp[1]=m[1];                               
                                       
            for(int i=2;i<=10000;i++){
                dp[i]=dp[i-1];
                if(m.count(i))dp[i]=max(m[i]*i+dp[i-2],dp[i]);}
                                       return dp[10000];
    }
};