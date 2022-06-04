class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        multiset<int>s1(t.begin(),t.end()),s2(a.begin(),a.end());
        return s1==s2;
    }
};