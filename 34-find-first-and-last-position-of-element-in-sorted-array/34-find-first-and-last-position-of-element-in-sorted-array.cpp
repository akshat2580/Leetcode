class Solution {
public:
    vector<int> searchRange(vector<int>& s, int t) {
        vector<int>v(2,-1);int n=s.size();
        for(int i=0;i<n;i++){
         if(s[i]==t && v[0]==-1)v[0]=i;   
            else if(s[i]==t)v[1]=i;
            
        }
        if(v[1]==-1 && v[0]!=-1)v[1]=v[0];
        return v;
    }
};