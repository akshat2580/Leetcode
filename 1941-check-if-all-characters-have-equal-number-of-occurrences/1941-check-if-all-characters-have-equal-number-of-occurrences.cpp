class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        int j=0;
        for(auto i:s)m[i]++;
        j=m[s[0]];
        for(auto i:m)if(j!=i.second)return false;
        return true;
    }
};