class Solution {
 public:int c=0;
    void solve(vector<int>&s,int n,int t){
        if(n==s.size()){
            if(t==0)
            c++;
        }
        else{
      solve(s,n+1,t+s[n]);
        solve(s,n+1,t-s[n]);
        }
        
    }
    int findTargetSumWays(vector<int>& s, int t) {
      solve(s,0,t);
        return c;
    }
};