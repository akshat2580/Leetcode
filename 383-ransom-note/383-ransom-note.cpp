class Solution {
public:
    bool canConstruct(string r, string s) {
        map<char,int>m;
        for(auto i:s)m[i]++;
        for(auto i:r)if(!m[i]--)return false;
        return true;
    }
};