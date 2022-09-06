class Solution {
public:
    bool findSubarrays(vector<int>& s) {
        map<int,int>m;int c=0;int n=s.size();
for(int i=1;i<n;i++){
    m[s[i]+s[i-1]]++;
    if(m[s[i]+s[i-1]]>1)return 1;
}      return 0;
    }
};