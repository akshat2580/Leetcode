class Solution {
public:
    // int n=0;
//     int solve(vector<int>&s,int k,int i){
//         int mx=0;
//         if(k==0){n=max(n,i);
//             return ;}
//        for(int j=i+2;j<k;i++){
//            mx=max(mx,solve(s,k,j));
           
//        }mx+=s[i];
//         mx=max(mx,solve(s,k,i+1));
//         return mx;
//     }
    int rob(vector<int>& s) {
        int n=s.size();
        if(n==1)return s[0];
        if(n==2)return max(s[0],s[1]);
        vector<int> dp(n);
        dp[0]=s[0];
        dp[1]=max(dp[0],s[1]);
        for(int i=2  ; i<n ; i++){
            dp[i]=max(dp[i-1],dp[i-2]+s[i]);
        }
        return dp[n-1];
    }
    
};