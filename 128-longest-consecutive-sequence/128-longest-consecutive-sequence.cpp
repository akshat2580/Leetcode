class Solution {
public:
    int longestConsecutive(vector<int>& v) {
       int m=0;int c=1;int g=0;
        map<int,int>mp;
        if(v.size()==0)return 0;
       for(auto i:v)mp[i]++;
        set<int>sd(v.begin(),v.end());
        for(auto i:sd){
            if(mp[i+1]){c++;
                     mp[i+1]--;  }
            else {g=max(g,c);c=1;}
        }
        return g;
    }
};