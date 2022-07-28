class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        if(s.size()!=t.size())return 0;
        for(auto i:s)m[i]++;
        for(auto i:t){
            if(!m[i]--)return 0;
        }
        return 1;
    }
};