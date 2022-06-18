class Solution {
public:
    vector<int> twoSum(vector<int>& s, int t) {
        unordered_map<int,int>m;
        int n=s.size();
        vector<int>v(2,-1);
        for(int i=0;i<n;i++)m[s[i]]=i+1;
        for(int i=0;i<n;i++){
            if(m[t-s[i]]&&m[t-s[i]]!=i+1){
                v[1]=m[t-s[i]];v[0]=i+1;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};