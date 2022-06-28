class Solution {
public:
    int minDeletions(string s) {
    int c[26] = {}, r = 0;
    unordered_set<int> a;
    for (char i : s)c[i-'a']++;
    for (int i = 0; i < 26; ++i)
        while(c[i] > 0 && !a.insert(c[i]).second)
        {r++;; c[i]--;}
    return r;
}
};