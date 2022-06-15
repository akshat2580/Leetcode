class Solution {
public:
   static bool cmp(string& s1,string& s2){
        if(s1.size()<s2.size())
            return true;
        else 
            return false;
    }
    int longestStrChain(vector<string>& s) {
        int n=s.size();int r=0;
        sort(s.begin(),s.end(),cmp);
        map<string,int>dp;
      for (auto w : s) {
            for (int i = 0; i < w.size(); i++) {
                string pre = w.substr(0, i) + w.substr(i + 1);
                dp[w] = max(dp[w], dp.find(pre) == dp.end() ? 1 : dp[pre] + 1);
            }
            r = max(r, dp[w]);
        }return r;
    }
};