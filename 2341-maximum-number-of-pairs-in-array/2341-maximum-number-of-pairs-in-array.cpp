class Solution {
public:
    vector<int> numberOfPairs(vector<int>& s) {
        unordered_map<int,int>m;int c=0,k=0;
        for(auto i:s)m[i]++;
        for(auto i:m)if(i.second%2){k++;}
        vector<int>v(2);v[0]=(s.size()-k)/2;v[1]=k;
        return v;
    }
};