class Solution {
public: 
    vector<int> twoSum(vector<int>&s, int t) {
        int n=s.size();
         vector<int>v(2);
        map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[s[i]].push_back(i+1);
        }
        for(int i=0;i<n;i++){
            if(m[t-s[i]].size())
            {
            if(m[t-s[i]].size()==1)
                {
                v[0]=m[s[i]][0];
                 v[1]=m[t-s[i]][0];
                   break;
                }
            else if(t-s[i]==s[i])
                {
                 v[0]=m[s[i]][0];
                v[1]=m[s[i]][1];
                 }
            }
        }
        return v;                                      
    }
};