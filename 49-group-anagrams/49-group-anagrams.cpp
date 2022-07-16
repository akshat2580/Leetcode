class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n=str.size();
        unordered_map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string g=str[i];
            sort(g.begin(),g.end());
            m[g].push_back(str[i]);
        }
        vector<vector<string>>v;
        for(auto i:m)v.push_back(i.second);
        return v;
    }
};