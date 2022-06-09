class Solution {
public: 
    vector<int> twoSum(vector<int>&s, int t) {
        int n=s.size();
         vector<int>v(2);
       
        map<int,int>m;int i;
        for( i=0;i<n;i++)
            if(m[t-s[i]]){v[1]=i+1;break;}
                else
            m[s[i]]=i+1;
        v[0]=m[t-s[i]];
        return v;
    }
};