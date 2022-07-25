class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         vector<int>v;
        vector<int>m;
        for(int i=0;i<s.size();i++)
            if(s[i]==c)
            m.push_back(i);
        for(int i=0;i<s.size();i++){int k=INT_MAX;
            for(auto j:m){
                k=min(abs(i-j),k);
            }v.push_back(k);
        }
        return v;
    }
};