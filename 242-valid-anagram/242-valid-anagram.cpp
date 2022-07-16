class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!=t.size())return false;
        map<char,int>m;
        for(auto i:s)m[i]++;
        for(auto i:t)
            if(m[i]==0)return false;
        else m[i]--;
        return true;
    }
};