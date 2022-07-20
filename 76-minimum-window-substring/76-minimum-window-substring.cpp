class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        for(auto i:t)m[i]++;
        string ans="";
        int r=t.size();
        int min = INT_MAX, start = 0, left = 0, i = 0;
        while(i <= s.size() && start < s.size()) {
            if(r) {
                if (i == s.size()) break;
                m[s[i]]--;
                if (m[s[i]] >= 0) r--;
                i++;
            } else {
                if (i - start < min) {
                    min = i -start;
                    left = start;
                }
                m[s[start]]++;
                if (m[s[start]] > 0) r++;
                start++;
            }
        }
        return min == INT_MAX? "" : s.substr(left, min);
    }
};