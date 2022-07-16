class Solution {
public:
    vector<int> twoSum(vector<int>& s, int t) {
        unordered_map<int,int>m;
       
        for(int i=0;i<s.size();i++){
            if(m.find(t-s[i])!=m.end())return {m[t-s[i]]+1,i+1};
            m[s[i]]=i;
        }
        return {};
    }
};