class Solution {
public:
    int minDeletions(string s) {
        
        vector<int> freq(26, 0);    
        for(auto &c: s) {
            freq[c - 'a']++;
        }
        
        int n = s.length();
        vector<int> cnt(n+1, 0);
        for(auto f: freq) {
            cnt[f]++;
        }
        
        int j, ans = 0;
        
        for(int i=n; i>=1; i--) {
            while(cnt[i] > 1) {
                j = i-1;
                while(j > 0 && cnt[j] != 0) {
                    j--;
                }
                ans += i-j;
                cnt[j]++;
                cnt[i]--;
            }
        }
        
        return ans;
    }
};